#include <stdio.h>
#include <string.h>

main()
{
	char userDBname[20] = "admin";
	char userDBpassword[20] = "1234";
	
	int login = 0;
	
	char userName[10];
	char userPassword[10];
	
	do
	{
		printf("Enter your name \n");
		scanf("%s", &userName);
		printf("Please enter your password \n");
		scanf("%s", &userPassword);
		if(strcmp(userDBname,userName)==0 && strcmp(userDBpassword,userPassword)==0)
		{
			printf("login successful");
			login = 1;
		}
		else
		{
			printf("Invalid credentials, please enter again \n");
		}
	}
	while(login == 0);
	return 0;	
}
