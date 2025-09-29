# include <stdio.h>

int main()
{
	int c;
	int i;
	printf("Please enter the number of column int the table\n");
	scanf(" %d", &c);
	for(i=1 ; i<=10 ; i++)
	{
		printf("%d \t x \t %d \t = \t %d \n",c ,i , i*c);
	}
	return 0;
}
