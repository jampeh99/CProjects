#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("What is your cell number's 1st digit: ");
    scanf("%d",&num);
    //Do while loop
    do
    {
        printf("The 1st digit of my cell number is %d. \n",num);
        num++;
    }
    while (num <=1);
    return 0;
}
