#include<stdio.h>

int main()
{
	int exit = 0;
	char exitcond;
	unsigned long number;
	unsigned long temp;
	while (!exit)
	{
		printf("\nEnter a number less than 4 294 967 295 to be converted to binary: ");
		scanf("%lu", &number);
		printf("\n%lu has the following binary representation:", number);
		printf("\n\n********************************\n\n");

		for (int i = 31; i>=0; i--)
		{
			temp = number >> i;

			if (temp & 1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n\n********************************\n\n");
		printf("\n\nPress Q to quit or any other key to try again....");
		getchar();
		scanf("%c", &exitcond);
		if (exitcond == 'q' || exitcond == 'Q')
		{
			exit = 1;
		}
	}
	getchar();


}