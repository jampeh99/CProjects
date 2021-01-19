#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    //Receiving input
    scanf("%d", &marks);

    //Switch Statements
    switch (marks)
    {
        case 100:
        case 95:
        case 90:
            printf("A+");
            break;
        case 80:
            printf("A");
            break;
        case 75:
            printf("B+");
            break;

        default:
            printf("Your marks have not been recorded.");
    }
}
