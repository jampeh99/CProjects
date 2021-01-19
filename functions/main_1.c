#include <stdio.h>
#include <stdlib.h>

int main()
{
   //A function that determines whether a user is under-aged
   int age=0;
   void yourage()
   {
       printf("Please enter your age: ");

       scanf("%d", &age);

       if (age >= 18)
        {
            printf("Congrats, you can register.");
        }

        else if(age<18)
        {
            printf("Sorry, but minors cannot register.");
        }
   }

   yourage();
}


