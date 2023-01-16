#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,sum=5;
	clrscr();

	for(i=1; i<=5; i++)
	{
		for(j=5; j>=i; j--)
		{
			if(sum%2==1)
			{
				printf("1");
				sum--;
			}
			else
			{
				printf("0");
				sum--;
			}
		}
		sum=5;
		sum=sum-i;
		printf("\n");
	}

	getch();
}