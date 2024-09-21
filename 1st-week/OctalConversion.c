#include<stdio.h>
#include<conio.h>
void main()
{
int number,remaindar,sum=0,i=1;
clrscr();
printf("Enter the number:");
scanf("%d",&number);
    while(number!=0)
    {
        remaindar=number%8;
        number=number/8;
        sum=sum+remaindar*i;
        i=i*10;
    }
    printf("%d",sum);
getch();
}