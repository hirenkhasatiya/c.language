#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i==1||i==3)
		{
			if(i==1)
			{
				printf(" *** \n");
			}
			else
			{
				printf("*****\n");
			}
		}
		else
		{
			printf("*   *\n");
		}
	}
	getch();
}