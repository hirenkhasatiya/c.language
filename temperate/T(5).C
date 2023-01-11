#include<stdio.h>
#include<conio.h>

main()
{
	int i,fact=1,num;
	clrscr();

	printf("enter number :-");
	scanf("%d",&num);

	for(i=1; i<=num; i++)
	{
		printf("%d\n",i);
		fact=fact*i;

	}
		printf("factorial of %d is :-%d",num,fact);

	getch();
}