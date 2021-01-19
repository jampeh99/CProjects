#include <stdio.h>
#include <stdlib.h>

//Creating a function to sum two numbers
void addition(int a, int b)
{
    int sum=a+b;
    printf("The sum of %d",a);
    printf(" & %d is: ",b);
    printf("%d",sum);
}

int main()
{
    addition(20, 30);

    //Receiving input from user
    int x,y;
    printf("\nEnter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

    sum(x,y);
}
