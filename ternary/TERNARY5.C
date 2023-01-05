#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d,e;

	clrscr();

	printf("enter the value of a :-");
	scanf("%d",&a);
	printf("enter the value of b :-");
	scanf("%d",&b);
	printf("enter the value of c :-");
	scanf("%d",&c);
	printf("enter the value of d :-");
	scanf("%d",&d);
	printf("enter the value of e :-");
	scanf("%d",&e);

	(a==b && a==c && a==d && a==e)
		?printf("all values are same..")
		:(a==b && b==c && c==d)
			?printf("a,b,c and d are same..")
			:(a==b && b==c && c==e)
			    ?printf("a,b,c and e are same..")
			    :(a==b && b==d &&d==e)
				?printf("a,b,d and e are same..")
				:(a==c && c==d && d==e)
					?printf("a,c,d and e are same..")
					:(b==c && c==d && d==e)
						?printf("b,c,d and e are same..")
						:(a==b && b==c)
							?printf("a,b and c are same..")
							:(a==b && b==d)
								?printf("a,b and d are same..")
								:(a==b && b==e)
									?printf("a,b and e are same..")
									:(a==c && c==d)
										?printf("a,c and d are same..")
										:(a==c && c==e)
											?printf("a,c and e are same..")
											:(a==d && d==e)
												  ?printf("a,d and e are same..")
												  :(b==c && c==d)
													?printf("b,c and d are same..")
													:(b==c && c==e)
														?printf("b,c and e are same..")
														:(b==d && d==e)
															?printf("b,d and e are same..")
															:(c==d && d==e)
																?printf("c,d and e are same..")
																:(a==b)
																	?printf("a and b are same..")
																	:(a==c)
																		?printf("a and c are same..")
																		:(a==d)
																			?printf("a and d are same..")
																			:(a==e)
																				?printf("a and e are same..")
																				:(b==c)
																					?printf("b and c are same..")
																					:(b==d)
																						?printf("b and d are same..")
																						:(b==e)
																							?printf("b and e are same..")
																							:(c==d)
																								?printf("c and d are same..")
																								:(c==e)
																									?printf("c and e are same..")
																									:(d==e)
																										?printf("d and e are same..")
																										:(a>b)
																											?(a>c)
																												?(a>d)
																													?(a>e)
																														?printf("a is max...")
																														:printf("e is max...")
																													:(d>e)
																														?printf("d is max...")
																														:printf("e is max...")
																												:(c>d)
																													?(c>e)
																														?printf("c is max...")
																														:printf("e is max...")
																													:(d>e)
																														?printf("d is max...")
																														:printf("e is max...")
																											:(b>c)
																												?(b>d)
																													?(b>e)
																														?printf("b is max...")
																														:printf("e is max...")
																													:(d>e)
																														?printf("d is max...")
																														:printf("e is max...")
																												:(c>d)
																													?(c>e)
																														?printf("c is max...")
																														:printf("e is max...")
																													:(d>e)
																														?printf("d is max...")
																														:printf("e is max...");


	getch();
}

