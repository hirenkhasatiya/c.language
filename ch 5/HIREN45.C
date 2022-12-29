#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,sum;
    clrscr();
    printf("enter the value of x =");
    scanf("%d",&x);
    printf("enter the value of y =");
    scanf("%d",&y);

    sum =(x*x)+(y*y)-(2*x*y);
    printf("addition is =%d",sum);



    getch();
}