#include <stdio.h>

int getValueFromArray(int* array, int len, int index)
{

    int value;

    // check that the array index is less than the maximum

    // length of the array
    if (index < len) {

        // get the value at the specified index of the array
        value = array[index];
    }
    // if array index is invalid then output error message

    // and return value indicating error
    else {
        printf("Value is: %d\n", array[index]);
        value = -1;
    }

    return value;
}

int main(void)
{
    int temp[5] = { 1, 2, 3, 4, 5 };

    printf("value = %d\n", getValueFromArray(temp, 5, -3));

    return 0;
}
