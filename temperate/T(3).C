#include<stdio.h>
#include<conio.h>

main()
{
	int num,i;
	clrscr();

	printf("enter a number :-");
	scanf("%d",&num);
	i=0;

	while(num)
	{
		num =num/10;
		i++;
	}
	printf("total number of digit in a given number :-%d",i);

	getch();
}