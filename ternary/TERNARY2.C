#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();

	printf("enter the value of a :-");
	scanf("%d",&a);
	printf("enter the value of b :-");
	scanf("%d",&b);

	(a==b)
	     ?printf("a and b are same...")
	     :(a>b)
		  ?printf("a is max..")
		  :printf("b is max..");
	getch();
}