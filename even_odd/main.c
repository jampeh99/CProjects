#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int mod = 0;
    printf("Enter a number: ");
    //Receiving input
    scanf("%d", &num);
    mod = num % 2

    //if statement block
    if (mod == 0) {
        printf("%d is even.", num);
    }

    else {
        printf("%d is odd.", num);
    }

}
