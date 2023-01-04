#include<stdio.h>
#include<conio.h>

main()
{
	char choice;
	int prefs;
	clrscr();

	printf("press 1 for english\n");
	printf("press 2 for gujarati\n");
	printf("press 3 for hindi\n");

	printf("enter your choice :-");
	scanf("%c",&choice);

	switch(choice)
	{
		case '1' :
			printf("your selected language is english\n");
			printf("press 4 for check balance\n");
			printf("press 5 for check your plan\n");
			printf("press 6 for check validity\n");

			printf("enter youre choice :-");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 4 :
					printf("your balance is......");
					break;
				case 5 :
					printf("your plan is......");
					break;
				case 6 :
					printf("your validity is......");
					break;
				default:
					printf("invalide choice\n");

			}
			break ;
		case '2' :
			printf("your selected language is gujarati\n");
			printf("press 4 for check balance\n");
			printf("press 5 for check your plan\n");
			printf("press 6 for check validity\n");

			printf("enter your choice :-");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 4 :
					printf("your balance is...");
					break ;
				case 5 :
					printf("your plan is...");
					break ;
				case 6 :
					printf("your validity is...");
					break ;
				default :
					printf("invalide choice");
			}
			break ;
		case '3' :
			printf("your selected language is hindi\n");
			printf("press 4 for check balance\n");
			printf("press 5 for check plan\n");
			printf("press 6 for check validity\n");

			printf("enter your choice :-");
			scanf("%d",&prefs);

			switch(prefs)
			{
				case 4 :
					printf("your balance is...");
					break ;
				case 5 :
					printf("your plan is...");
					break ;
				case 6 :
					printf("your validity is...");
					break ;
				default :
					printf("invalide choice");
					break ;
			}
			break ;
		default:
			printf("invalide choice");
	}
	getch();
}