#include <stdlib.h>
#include <stdio.h>

    //Function that passes a pointer as its arguments
int getSum (int *sumPointer, int size)
{
    int sum=0;
    for (int i=0; i<size; i++)
    {
        sum += sumPointer[i];
    }
    return sum;
}

int main()
{
    int myArray [7] = {5,10,15,20,25,10,35};
    int total = getSum(myArray, 7);
    printf("The sum of the values in the array = %d", total);
}
