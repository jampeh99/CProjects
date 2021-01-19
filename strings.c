#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    //Strings in C
    char string1[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    //\0 = Null Character
    char string2[] = "Hello";
    //[]creates a stringArray with indefinite number of elements

    printf("The value in the 1st string is %s\n",string1);
    printf("The value in the 2nd string is %s\n",string2);

    char name[10] = "Jeffrey";
    char name2[10];
    //Copying the contents of one var into another
    strcpy(name2, name);
    puts(name2);

    //Adding two strings
    strcat(string1, name2);
    puts(string1);

    //Length (size) of a string
    int length = strlen(name);
    printf("\nNumber of characters in Name = %d", length);
}
