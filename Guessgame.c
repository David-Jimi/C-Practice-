#include<stdlib.h>
#include<stdio.h>

int main()
{
	int GuessNumber = 7;
	int Number;
	int Guesscount = 0;
	int Guesslimit = 3;
	int Outofguess = 0;
	
	while(Number != GuessNumber && Outofguess == 0)
	{
		if (Guesscount < Guesslimit)
		{
		printf("Guess a number: ");
		scanf("%d", &Number);
		Guesscount++;
		}
		else {
			Outofguess = 1;
		}
	}
	
		if (Outofguess == 1)
		{
			printf("Out of Guess, Try again next time.");
		}
		else
			{
			printf("You win! ");
			}
}

