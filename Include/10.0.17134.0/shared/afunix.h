/*++

Copyright (c) Microsoft Corporation

Module Name:

    afunix.h

Abstract:

    This file contains the definitions for the AF_UNIX socket address family
    that can be used by both user-mode and kernel mode modules.

    BETA: The definitions in this header are subject to change.

--*/

#ifndef _AFUNIX_
#define _AFUNIX_

#pragma once

#define UNIX_PATH_MAX 108

typedef struct sockaddr_un
{
     ADDRESS_FAMILY sun_family;     /* AF_UNIX */
     char sun_path[UNIX_PATH_MAX];  /* pathname */
} SOCKADDR_UN, *PSOCKADDR_UN;

#endif /* _AFUNIX_ */