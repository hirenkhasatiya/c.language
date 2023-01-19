#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i==1||i==2||i==4||i==5)
		{
			if(i==1||i==5)
			{
				printf("*   *\n");
			}
			else
			{
				printf(" * *\n");
			}
		}
		else
		{
			printf("  *\n");
		}
	}
	getch();
}