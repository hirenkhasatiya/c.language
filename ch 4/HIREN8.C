#include<stdio.h>
#include<conio.h>

main()
{
    int a,b;
    clrscr();

    printf("enter the value of a= ");
    scanf("%d",&a);
    printf("enter the value of b= ");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("a =%d\n",a);
    printf("b =%d\n",b);
    getch();
}