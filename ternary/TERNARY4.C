#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;

	clrscr();

	printf("enter the value of a :-");
	scanf("%d",&a);
	printf("enter the value of b :-");
	scanf("%d",&b);
	printf("enter the value of c :-");
	scanf("%d",&c);
	printf("enter the value of d :-");
	scanf("%d",&d);

	(a==b && a==c && a==d)
		?printf("all values are same..")
		:(a==b && b==c)
			?printf("a,b and c are same..")
			:(b==c && b==d)
			    ?printf("b,c and are same..")
			    :(a==c && a==d)
				?printf("a,c and d are same..")
				:(a==b && a==d)
					?printf("a,b and d are same..")
					:(a==b)
						?printf("a and b are same..")
						:(a==c)
							?printf("a and c are same..")
							:(a==d)
								?printf("a and d are same..")
								:(b==c)
									?printf("b and c are same..")
									:(b==d)
										?printf("b and d are same..")
										:(c==d)
											?printf("c and d are same..")
											:(a>b)
												?(a>c)
													?(a>d)
														?printf("a is max...")
														:printf("d is max..")
													:(c>d)
														?printf("c is max..")
														:printf("d is max..")
												:(b>c)
													?(b>d)
														?printf("b is max..")
														:printf("d is max..")
													:(c>d)
														?printf("c is max..")
														:printf("d is max");

	getch();

}