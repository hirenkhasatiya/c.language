#include<stdio.h>
#include<conio.h>

main()
{
    int a,b,c;
    clrscr();

    printf("enter the value of a= ");
    scanf("%d",&a);
    printf("enter the value of b= ");
    scanf("%d",&b);
    printf("enter the value of c= ");
    scanf("%d",&c);

    a = b;
    b = c;
    c = a;

    printf("a =%d\n",a);
    printf("b =%d\n",b);
    getch();
}