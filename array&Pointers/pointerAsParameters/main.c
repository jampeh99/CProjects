#include <stdio.h>
#include <stdlib.h>

//A function that places a variable into a specific memory location
void valueIntoAddress(int *location)
{
    *location = 1000;
    return;
}

int main()
{
    int value;
    valueIntoAddress(&value);

    printf("The value stored in memory is %d.", value);
}
