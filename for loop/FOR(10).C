#include<stdio.h>
#include<conio.h>

main()
{
	int i,num;
	clrscr();

	printf("enter number to print table :-");
	scanf("%d",&num);

	for(i=1; i<=10; i++)
	{
		printf("%d * %d = %d\n",num,i,(num*i));
	}

	getch();
}