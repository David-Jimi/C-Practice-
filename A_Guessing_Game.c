#include<stdio.h>
#include<stdlib.h>

int main()
{
	int SecretNumber = 5;
	int Guess;
	int Guesscount = 0;
	int GuessLimit = 3;
	
	
	while (Guess != SecretNumber && Guesscount < GuessLimit)
	{
		if(Guesscount < GuessLimit)
		{
		printf("Please enter a number: ");
		scanf("%d", &Guess);
		Guesscount++;
		} 	else()
	{
		printf("You are out of guesses.");
	}
	}

}
