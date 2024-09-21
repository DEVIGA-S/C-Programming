#include<stdio.h>
#include<conio.h>
void main()
{
int  number,remaindar,rev=0;
printf("Enter the number:");
scanf("%d",&number);
    while(number>0)
    {
        remaindar=number%10;
        rev=(rev*10)+remaindar;
        number=number/10;
        
    }
 printf("%d",rev);

getch(); 
}