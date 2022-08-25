#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char verb[25];
	char verb2[25];
	char verb3[25];
	char bathfur[25];
	char fish[25];
	char verbing[25];
	char ffood[25];
	char verbingb[25];
	char bugs[25];
	char nouns[25];
	
	printf("Enter in the following :) or don't... :( \n");
	printf("Verb: ");
	scanf("%s", verb);
	printf("Another verb: ");
	scanf("%s", verb2);
	printf("Sorry(Last verb): ");
	scanf("%s", verb3);
	printf("Bathroom Furniture: ");
	scanf("%s", bathfur);
	printf("Fish: ");
	scanf("%s", fish);
	printf("Verb-ing: ");
	scanf("%s", verbing);
	printf("Fast food: ");
	scanf("%s", ffood);
	printf("Verb-ing; (Type of bird(s)): ");
	scanf("%s", verbingb);
	printf("Bugs: ");
	scanf("%s", bugs);
	printf("Noun: ");
	scanf("%s",nouns);
	
		
	printf("\nWelcome to, %scraft. ",verb);
	printf("A game where you can %s, ",verb2);
	printf("%s, and build %s for days! \n",verb3,bathfur);
	printf("If you have enough %s, you can buy yourself things to finish %s your farm. \n",fish,verbing);
	printf("You can collect %s eggs, and grow them into %s. \n",ffood,verbingb);
	printf("You can also eat %s, and grow %s. Have fun!",bugs,nouns);
}
