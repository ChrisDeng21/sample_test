#include <stdio.h>
#include <stdlib.h>

char* connection(void)
{
    char* foo;

    foo = malloc(1024);
    return foo;
}

void endConnection(char* foo)
{
    free(foo);
}

int main(void)
{
    char* foo;

    while (1) //thread 1
        //On a connection
        foo = connection(); //thread 2

    //When the connection ends
    endConnection(foo);

    return 0;
}
