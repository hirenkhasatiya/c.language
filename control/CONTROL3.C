#include<stdio.h>
#include<conio.h>

main()
{
     int a,b,c;
     clrscr();
     printf("a =");
     scanf("%d",&a);
     printf("b =");
     scanf("%d",&b);
     printf("c =");
     scanf("%d",&c);

     if (a>b&&a>c)
     {
	  printf("a is maximum");
     }
     else if(b>c&&b>a)
     {
	  printf("b is maximum");
     }
     else
     {
	  printf("c is maximum");
     }




     getch();
}