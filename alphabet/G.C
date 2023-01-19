#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i==1||i==3||i==5)
		{
			if(i==3)
			{
				printf("* **\n");
			}
			else
			{
			printf(" ***\n");
			}
		}
		else
		{
			if(i==4)
			{
				printf("*  *\n");
			}
			else
			{
			printf("*\n");
			}
		}
	}
	getch();
}