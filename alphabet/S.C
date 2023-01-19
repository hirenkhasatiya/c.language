#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();
	for(i=1;i<=6;i++)
	{
		if(i==1||i==2||i==5||i==6)
		{
			if(i==1||i==6)
			{
				printf(" ***\n");
			}
			else
			{
				printf("*   *\n");
			}
		}
		else
		{
			if(i==3)
			{
				printf(" *\n");
			}
			else
			{
				printf("  *\n");
			}
		}
	}
	getch();
}