#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();
	printf("enter the value of n :-");
	scanf("%d",&n);

	for(i=n; i>=1; i--)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	getch();
}