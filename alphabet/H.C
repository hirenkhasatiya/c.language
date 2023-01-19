#include<stdio.h>
#include<conio.h>

main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
		if(i==3)
		{
			printf("****\n");
		}
		else
		{
			printf("*  *\n");
		}
	}
	getch();
}