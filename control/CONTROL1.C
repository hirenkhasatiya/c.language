#include<stdio.h>
#include<conio.h>

main()
{
     int num1,num2;
     clrscr();

     printf("num1=");
     scanf("%d",&num1);
     printf("num2=");
     scanf("%d",&num2);

     if(num1>num2)
     {
	   printf("num2 minimum");
     }
     else
     {
	   printf("num1 minimum");
     }

     getch();
}