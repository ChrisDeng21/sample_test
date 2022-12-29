#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CMD_MAX 128

int cwe78(int argc, char** argv)
{
    (void)(argc);

    char cmd[CMD_MAX] = "/bin/cat "; //"/usr/bin/cat ";
    strcat(cmd, argv[1]);
    system(cmd);
    return 0;
}
