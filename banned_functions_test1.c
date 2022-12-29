#include <stdio.h>
#include <string.h>

static void manipulate_string(char* string)
{
    char buf[24];
    strcpy(buf, string);
}

int bft1(void)
{
    // string length is more than 24
    char* data = "Never underestimate your power to change yourself!";

    manipulate_string(data);

    return 0;
}
