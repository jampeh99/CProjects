#include <stdio.h>
#include <stdlib.h>

int product(int a, int b)
{
    return (a*b);
}

int main()
{
	printf("Product = %d\n", product(25,25));
  int x,y;
  printf("Enter two numbers to calculate their product.");
  printf("\nEnter the first number: ");
  scanf("%d",&x);

  printf("Enter the second number: ");
  scanf("%d",&y);

  int prod;
  prod = product(x,y);
  printf("The product is %d.",prod);
}
