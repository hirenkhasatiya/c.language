#include<stdio.h>
#include<conio.h>

main()
{
	int i,num,sum=0;
	clrscr();

	printf("enter the value of num :-");
	scanf("%d",&num);

	for(i=1; i<=num; i++)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("sum :-%d\n",sum);

	getch();
}