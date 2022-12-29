#include <stdio.h>

int cwe476()
{
    FILE* fp = fopen("good.c", "r");

    if (fp != NULL) {
        ; //...
    }

    fclose(fp);
    fp = NULL;
    return 0;
}
