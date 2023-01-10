#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,fact=1;
	clrscr();

	printf("n :-");
	scanf("%d",&n);

	i =1;
	do
	{
		printf("%d\n",i);
		fact=fact*i;
		i++;
	}
	while(i<=n);
	printf("factorial of %d is :-%d",n,fact);
	getch();
}