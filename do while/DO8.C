#include<stdio.h>
#include<conio.h>

main()
{
	int i,n,sum=0;
	clrscr();

	printf("n :-");
	scanf("%d",&n);

	i =1;
	do
	{
		printf("%d\n",i);
		sum =sum+i;
		i++;
	}
	while(i<=n);
	printf("sum :-%d",sum);
	getch();
}