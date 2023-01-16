#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,sum=0;
	clrscr();

	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			sum++;
			printf("%d",sum);
		}
		printf("\n");
	}

	getch();
}