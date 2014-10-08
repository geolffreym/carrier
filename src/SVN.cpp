/*
 * File:   SVN.cpp
 * Author: gmena
 *
 * Created on 09 de septiembre de 2014, 11:09 AM
 */

#include "SVN.h"

using namespace std;

void SVN::checkout (string destiny, const vector<Box> &url) {
    File file;
    svn_error_t *err;
    apr_pool_t *pool;
    svn_revnum_t *result_rev = 0;
    svn_opt_revision_t peg_revision;
    svn_client_copy_source_t *rev;
    svn_depth_t depth = svn_depth_unknown;
    svn_client_ctx_t *ctx;
    int i = 0;

    peg_revision.kind = svn_opt_revision_head;
    apr_initialize ();

    pool = svn_pool_create(0);

    if ((err = svn_client_create_context2 (&ctx, 0, pool))) {
        cout << err->message;
        svn_pool_destroy (pool);
    }

    file.make (destiny);

    for (; i < url.size (); i++) {
        const char *URL = url[i].value.c_str ();
        const char *name = url[i].index.c_str ();
        const char *newDir = (destiny + name).c_str ();

        if (!file.isDir ((destiny + name))) {
            if (!(err = svn_client_checkout3 (
                    result_rev,
                    URL, newDir,
                    &peg_revision,
                    &peg_revision, depth,
                    true, true, ctx, pool))) {

                Console::success ("|> Repository " + url[i].index + " created in " + (destiny + name) + "\n\n");

            } else {
                cout << err->message;
            }
        } else {
            Console::error ("|> The repository " + url[i].index + " already exist\n\n");
        }


    }

    svn_pool_destroy (pool);


}