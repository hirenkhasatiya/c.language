#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i==1||i==4||i==5)
		{
			printf("*     *\n");
		}
		else
		{
			if(i==2)
			{
				printf("* * * *\n");
			}
			else
			{
				printf("*  *  *\n");
			}
		}
	}
	getch();
}