#include<stdio.h>
#include<conio.h>

main()
{
	int i,n;
	clrscr();

	printf("n :-");
	scanf("%d",&n);

	i =n;
	do
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
		i--;
	}
	while(i>=1);
	getch();
}