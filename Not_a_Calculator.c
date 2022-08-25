#include<stdio.h>
#include<stdlib.h>

int main()
{
	double num1;
	double num2;
	double add;
	double subtract;
	double multiply;
	double divide;
	
	printf("Just enter two numbers, or don't... \n");
	printf("First number here : ");
	scanf("%lf", &num1);
	printf("Seconds : %" );
	scanf("%lf", &num2);
	
	add = num1 + num2;
	multiply = num1 * num2;
	divide = num1 / num2;
	subtract = num1 - num2;
	
	printf("So the addition will be : %f \n", add);
	printf("Subtraction is : %f \n", subtract);
	printf("Division : %f \n", divide);
	printf("And the product is : %f ", multiply);
	
}
