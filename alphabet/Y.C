#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i==3||i==4||i==5)
		{
			printf("  *\n");
		}
		else
		{
			if(i==1)
			{
				printf("*   *\n");
			}
			else
			{
				printf(" * *\n");
			}
		}
	}
	getch();
}