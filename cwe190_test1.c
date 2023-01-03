#include <stdio.h>

void cwe190(void)
{
    int a = 7000000000;
    a = a * 2;
    printf("a = %d\n", a);
}
