#include <stdio.h>

int GetUntrustedOffset()
{
    return 10;
}

int main(void)
{
    char* items[] = { "boat", "car", "truck", "train" };
    int index = GetUntrustedOffset();
    printf("You selected %s\n", items[index - 1]);
    return 0;
}
