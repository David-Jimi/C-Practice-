//A PROGRAM TO CALCULATE INTEREST BASED ON THE NUMBER OF YEARS
//if years = 1, rate = 0.5; if years = 2, rate = 1.0
//if years = 3, rate = 2.0;
int main()
{
	int years;
	float principal = 10000, interest, rate;
	printf("Please enter number of years as an integer: \n");
	scanf("%d", &years);
	switch (years)
	{
		case 1:
		rate = 0.5;
		interest = principal * rate * years;
		printf("Your interest would be : %f \n", interest);
		break;
		
		case 2:
			rate = 1.0;
			interest = principal * rate * years;
			printf ("Your interest would be : %f \n ", interest);
			break;
			
			case 3:
				
				rate = 2.0;
				interest = principal * rate * years;
				printf ("Your interest would be : %f \n", interest);
				break;
				
				default :
					printf ("You can save for a minimum of 1 and a maximum of 3 years \n");
					break;
	}
}
