#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int cwe77(int argc, char** argv)
{
    (void)(argc);

    char cat[] = "cat ";
    char* command;
    size_t commandLength;

    commandLength = strlen(cat) + strlen(argv[1]) + 1;
    command = (char*)malloc(commandLength);
    strncpy(command, cat, commandLength);
    strncat(command, argv[1], (commandLength - strlen(cat)));

    system(command);
    free(command);
    return (0);
}
