#include<stdio.h>
#include<stdlib.h>

int main()
{
	int age;
	char name[20];
	// This is a program to not show my skills in C language so far//
	
	printf("Please input your name here__ __: ");
	fgets(name, 20, stdin);
	printf("Your name is %s", name );
	
	printf("And you are how old ?? ");
	scanf("%d", &age);
	
	if (age <= 17) {
	printf("So you're %d, underaged \nThe program will end now... ",age);	
	
	printf("Or not \n");
	printf("Now onto the purpose of this program \n");
	
	
	printf("Bleh.");
	} 
	else
	{
		printf ("Well, It's still the end of the program ");
	}
	
	return 0;
	
	
}
