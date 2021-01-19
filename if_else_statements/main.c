#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Taking the user's age
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);

    //Conditions
    if (age == 18) {
        printf("You have the perfect age for the job.");
    }

    //Nested if statement
    if (age > 18) {
        printf("You have met the required age range.");
        if (age < 21)
        {
             printf("You are past 18 but less than 21.");
        }
    }

    /*else {
        printf("I'm sorry but minors cannot access this app.");
    }*/

}

