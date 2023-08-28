/* -*- mode:c; c-file-style:"k&r"; c-basic-offset: 4; tab-width:4; indent-tabs-mode:nil; mode:auto-fill; fill-column:78; -*- */
/* vim: set ts=4 sw=4 et tw=78 fo=cqt wm=0: */

/* Hello World */

// PID: 730716991

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <dirent.h>

int main()
{
    printf("hello, welcome to comp 530!\n");
    printf("%d\n", getpid());
    return EXIT_SUCCESS;
}
