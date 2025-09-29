# include <stdio.h>

main()
{
	int day;
	printf("Please enter Day number \n 1. Sunday \n 2. Monday \n 3. Tuesday \n 4. Wednesday \n 5. Thursday \n 6. Friday \n 7. Saturday \n");
	scanf("%d", &day);
	
	switch(day)
	{
		case 1:
			printf("Your Dinner for Sunday is Burger");
			break;
		
		case 2:
			printf("Your Dinner for Monday is Fries");
			break;
		
		case 3:
			printf("Your Dinner for Tuesday is Pizza");
			break;
		
		case 4:
			printf("Your Dinner for Wednesday is Nihari");
			break;
		
		case 5:
			printf("Your Dinner for Thursday is Qeema");
			break;
		
		case 6:
			printf("Your Dinner for Friday is Biryani");
			break;
		
		case 7:
			printf("Your Dinner for Saturday is Pasta");
			break;
		
		default:
			printf("No Dinner");
		
	}
}
