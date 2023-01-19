#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();
	for(i=1;i<=6;i++)
	{
		if(i==2||i==3||i==4)
		{
			printf("*   *\n");
		}
		else
		{
			if(i==1||i==5)
			{
				printf(" *** \n");
			}
			else
			{
				printf("    *\n ");
			}
		}
	}
	getch();
}