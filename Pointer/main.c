#include <stdio.h>
#include <stdlib.h>
//A pointer = A variable whose value is the address of another variable

int main()
{
    int value=25;
    printf("The address of value = %x\n", &value);
    //%x is used since we want a hexadecimal value
    
    printf("\n\n<-------------------->\n\n");
	// OR
	
	int address = 30;
	int *pointer = &address;
    printf("The address where the variable is stored = %x\n", &address);
    printf("The address where the variable is stored = %x\n", pointer);
    
    //Retrieving the value or variable stored in an address
    printf("The value at the address pointer is %d", *pointer);
}
