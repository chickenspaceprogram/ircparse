/*
    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at https://mozilla.org/MPL/2.0/.
*/

#ifndef IRCPARSE_H
#define IRCPARSE_H
#include <stddef.h>

typedef struct irc_tag {
    char *key;
    char *value;
} IrcTag;

typedef struct irc_msg {
    IrcTag *tags;
    size_t num_tags;
    char *server_name;
    char nick[10]; // nick is 10 long because it's convenient for it to also be a C-string
    char *user;
    char *host;
    char *command;
    char **params;
    size_t num_params;
} IrcMsg;

IrcMsg initIrcMsg(void);

IrcMsg freeIrcMsg(void);

#endif