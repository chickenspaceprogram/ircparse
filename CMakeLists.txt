#  This Source Code Form is subject to the terms of the Mozilla Public
#  License, v. 2.0. If a copy of the MPL was not distributed with this
#  file, You can obtain one at https://mozilla.org/MPL/2.0/.

cmake_minimum_required(VERSION 3.15)
project(
    ircparse
    VERSION 0.1
    DESCRIPTION "A simple IRC message formatter/parser"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 11)

add_subdirectory(src/ircparse)

