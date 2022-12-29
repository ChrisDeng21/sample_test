#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void manipulate_string(char* string)
{
    char buf[24];
    strcpy(buf, string);
}

int bft2(void)
{
    char* data;

    data = (char*)malloc(100);
    if (!data) {
        return -1;
    }

    // string length is more than 24
    snprintf(data, 100, "%s", "Never underestimate your power to change yourself!");

    manipulate_string(data);

    free(data);

    return 0;
}
