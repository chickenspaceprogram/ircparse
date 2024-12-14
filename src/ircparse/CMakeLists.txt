#  This Source Code Form is subject to the terms of the Mozilla Public
#  License, v. 2.0. If a copy of the MPL was not distributed with this
#  file, You can obtain one at https://mozilla.org/MPL/2.0/.

cmake_minimum_required(VERSION 3.15)

set(CMAKE_C_STANDARD 11)
set(IRCPARSE_HEADER_LIST
    "${ircparse_SOURCE_DIR}/include/ircparse/ircparse.h"
)

add_library(ircparse
    ircparse.c
    ${IRCPARSE_HEADER_LIST}
)

target_include_directories(ircparse PUBLIC "${PROJECT_SOURCE_DIR}/include/")

source_group(
    TREE "${PROJECT_SOURCE_DIR}/include"
    PREFIX "Header Files"
    FILES ${IRCPARSE_HEADER_LIST}
)
