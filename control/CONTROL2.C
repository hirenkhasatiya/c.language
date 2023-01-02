#include<stdio.h>
#include<conio.h>

main()
{
     int num;
     clrscr();

     printf("enter the value of number :- ");
     scanf("%d",&num);

     if (num==0)
     {
	   printf("this nummber is zero...");
     }
     else if(num > 0)
	  {
	       printf("this number is positive.....");
	  }
     else
     {
	  printf("thid number is nagetive.....");
     }

     getch();
}