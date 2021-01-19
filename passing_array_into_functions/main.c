#include <stdio.h>
#include <stdlib.h>

//A function that returns a value through passing arrays
int ArraySum(int MyArray[], int elementNumber)
{
    int sum=0;
    for (int i=0; i < elementNumber; i++)
    {
        //Summing the values in the array
        sum += MyArray[i];
    }
    return sum;
}

int main()
{
    int MyArray[7] = {2,4,6,8,10,12,14};
    int sum_array = ArraySum(MyArray, 7);
    printf("The sum of the values in the array is %d.",sum_array);
}
