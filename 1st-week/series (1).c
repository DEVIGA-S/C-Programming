#include<stdio.h>
#include<conio.h>
void main()
{
int i,number,fact;
float sum=0.0;
printf("1/1!+2/2!+3/3!........+n/n!");
printf("\n Enter the n value(n should be from 1 to 8):");
scanf("%d",&number);
fact=1;
    for(i=1;i<=number;i++)
    {
        fact=fact*i;
        sum=(float)i/fact+sum;
    }
    printf("The answer of the series is %f",sum);
getch();    
}