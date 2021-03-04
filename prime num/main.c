#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n, i = 3, count, c;
	
	printf("Enter Number of prime number to print \n");
	scanf("%d", &n);
	
	if (n >= 1) {
		printf("First %d prime numbers are: \n" ,n);
		printf("2\n");
	}
	
	for (count = 2; count <= n;) 
	{
		for (c = 2; c<= i - 1; c++)
	{
		if (i%c == 0)
		break;		
	}
		if (c == i)
		{
			printf("%d/n", i);
			count++;			
		}
		i++;
	}
	
	return 0;
}
