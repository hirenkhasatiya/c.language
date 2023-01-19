#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i==1||i==2||i==5)
		{
			if(i==2)
			{
				printf("**  *\n");
			}
			else
			{
				printf("*   *\n");
			}
		}
		else
		{
			if(i==4)
			{
				printf("*  **\n");
			}
			else
			{
				printf("* * *\n");
			}
		}
	}
	getch();
}