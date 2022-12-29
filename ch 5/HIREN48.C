#include<stdio.h>
#include<conio.h>

main()
{
    int x,y,z,sum;
    clrscr();
    printf("enter the value of x =");
    scanf("%d",&x);
    printf("enter the value of y =");
    scanf("%d",&y);
    printf("enter the value of z =");
    scanf("%d",&z);

    sum =(x*x*x)+(3*x*x*y)+(3*x*x*z)+(3*x*y*y)+(6*x*y*z)+(3*x*z*z)+(y*y*y)+(3*y*y*z)+(3*y*z*z)+(z*z*z);
    printf("addition is =%d",sum);



    getch();
}