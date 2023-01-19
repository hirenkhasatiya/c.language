#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i==1||i==2||i==3)
		{
			if(i==2)
			{
				printf("*  *\n");
			}
			else
			{
				printf("****\n");
			}

		}
		else
		{
			printf("*\n");
		}
	}
	getch();
}