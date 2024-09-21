#include<stdio.h>
#include<conio.h>
void main()
{
int i,number,j,k;
printf("Enter any value for n:");
scanf("%d",& number);
  for(i=1;i<=number;i++)
  {
      for(j=1;j<=number-i;j++)
      {
         printf("\t");
      }
         for(k=1;k<=i;k++)
         {
             printf("\t%d\t",i);
         }
   printf("\n");
  }
  getch();
}