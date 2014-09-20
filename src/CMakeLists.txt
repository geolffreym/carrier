cmake_minimum_required(VERSION 2.8.4)
project(carrier)



if(CMAKE_COMPILER_IS_GNUCXX)
    add_definitions(-std=gnu++0x)
endif()




add_library(json-c STATIC IMPORTED)
set_property(TARGET json-c PROPERTY IMPORTED_LOCATION /usr/local/lib/libjson-c.a)

include_directories(libgit2)
add_library(libgit2 STATIC IMPORTED)
set_property(TARGET libgit2 PROPERTY IMPORTED_LOCATION /usr/local/lib/libgit.so)


include_directories(subversion-sbr)
add_library(subversion-sbr STATIC IMPORTED)
set_property(TARGET subversion-sbr PROPERTY IMPORTED_LOCATION /usr/local/lib/libsvn_client-1.so)


include_directories(subversion)
add_library(subversion STATIC IMPORTED)
set_property(TARGET subversion PROPERTY IMPORTED_LOCATION /usr/local/lib/libsvn_subr-1.so)

include_directories(apr-1.0)
add_library(apr-1.0 STATIC IMPORTED)
set_property(TARGET apr-1.0 PROPERTY IMPORTED_LOCATION /usr/local/lib/libapr-1.so)



set(SOURCE_FILES
    main.cpp
    File.cpp
    PackGestor.cpp
    Util.cpp
    SVN.cpp
    Service.cpp
    Processor.cpp
    Common.cpp
    JSON.cpp
    Git.cpp
    Console.cpp
    String.cpp)

add_executable(carrier ${SOURCE_FILES})

target_link_libraries(carrier apr-1.0)
target_link_libraries(carrier subversion)
target_link_libraries(carrier subversion-sbr)
target_link_libraries(carrier json-c)
target_link_libraries(carrier git2)
target_link_libraries(carrier -lpthread)

<<<<<<< HEAD
install(TARGETS carrier EXPORT carrier DESTINATION bin)

=======
>>>>>>> 2256fe83497b182bc20ecb9b5602af0f9e1ef8a0


