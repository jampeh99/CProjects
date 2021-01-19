#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num [6] = {1,2,3,4,5,6}, *memoryAddress [6], i;

    //Finding the memory locations where the values are stored
    for (i=0; i<6; i++)
    {
        int location = memoryAddress[i] = &num [i];
        printf("The number %d is stored in memory location %d.\n", num [i], location);
    }

    printf("\n\n");
    for (i=0; i<6; i++)
    {
        //Finding the values using their locations
        int value = *memoryAddress[i];
        printf("The value stored in memory address %d = %d.\n", memoryAddress[i], value);
    }
}
