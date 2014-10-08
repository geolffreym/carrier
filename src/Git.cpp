/* 
 * File:   git.cpp
 * Author: gmena
 * 
 * Created on 05 de septiembre de 2014, 10:38 AM
 */

#include "Git.h"


using namespace std;

void Git::clone (string destiny, const vector <Box> &url) {
    File file;
    int i = 0;

    git_repository *out = 0;
    git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;
    git_checkout_options checkout_opts = GIT_CHECKOUT_OPTIONS_INIT;

    checkout_opts.checkout_strategy = GIT_CHECKOUT_SAFE_CREATE;
    clone_opts.checkout_opts = checkout_opts;

    file.make (destiny);

    if ( git_threads_init () == 0 ) {

        for ( ; i < url.size (); i++ ) {
            string URL = url[ i ].value;
            string name = url[ i ].index;
            string newDir = destiny + name;

            if ( !file.isDir (newDir) ) {

                const char *localURL = URL.c_str ();
                const char *local = (newDir.c_str ());

                if ( git_remote_valid_url (localURL) > 0 ) {
                    {
                        if ( git_clone (&out, localURL, local, &clone_opts) != 0 ) {
                            this->error ();
                        } else {
                            Console::success ("|> Repository " + name + " created in " + newDir + "\n\n");
                        }
                    }

                } else {
                    Console::error ("|> Invalid Repository: " + URL + "\n\n");
                }
            } else {
                Console::error ("|> The repository " + name + " already exist\n\n");
            }

        }

        git_threads_shutdown ();
    } else {
        this->error ();
    }
}

void Git::error () {
    const git_error *err = giterr_last ();

    if ( err ) {
        string message = err->message;
        Console::error ("\n|> ERROR: " + message + "\n");
    } else {
        Console::error ("\n|> ERROR: no detailed info \n");
    }
}