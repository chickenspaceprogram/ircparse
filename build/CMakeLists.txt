#  This Source Code Form is subject to the terms of the Mozilla Public
#  License, v. 2.0. If a copy of the MPL was not distributed with this
#  file, You can obtain one at https://mozilla.org/MPL/2.0/.

cmake_minimum_required(VERSION 3.15)
project(
    ircparse-build C
)

set(CMAKE_C_STANDARD 11)

add_subdirectory(../ ./ircparse)

add_executable(ircparse-build
    main.c
)

target_link_libraries(ircparse-build PRIVATE ircparse)