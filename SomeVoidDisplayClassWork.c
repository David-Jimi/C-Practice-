#include<stdio.h>
#include<stdlib.h>

void display(int a, int b)
{
	int c;
	c = sqrt(a*a+b*b);
	printf("C = %d\n", c);
}

int main()
{
	
	int num1; int num2;
	
	printf("Enter the first number to solve for: ");
	scanf("%d", &num1);
	
	printf("Enter the second number to solve for: ");
	scanf("%d", &num2);
	
	display(num1, num2);
	
	return 0;
}
