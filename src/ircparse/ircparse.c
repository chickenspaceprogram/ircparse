/*
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#include <ircparse/ircparse.h>

IrcMsg initIrcMsg(void) {
    IrcMsg msg = {
        .tags = NULL,
        .num_tags = 0,
        .server_name = NULL,
        .nick = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'},
        .user = NULL,
        .host = NULL,
        .command = NULL,
        .params = NULL,
        .num_params = 0,
    }

}

IrcMsg freeIrcMsg(void);