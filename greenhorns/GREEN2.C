#include<stdio.h>
#include<conio.h>

main()
{
   int a,b,c;
   clrscr();
   printf("entyer the value of a =");
   scanf("%d",&a);
   printf("entyer the value of b =");
   scanf("%d",&b);

   c = a;
   a = b;
   b = c;

   printf("a =%d\n",a);
   printf("b =%d\n",b);
   getch();
}