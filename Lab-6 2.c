# include <stdio.h>

int main()
{
	int n;
	int i;
	i = 1;
	printf("Please enter the number of which you want the  table of\n");
	scanf( "%d", &n);
	while(i <= 10)
	{
		printf("%d \t x \t %d \t = %d \n", i, n, i*n);
		i++;
	}
}
