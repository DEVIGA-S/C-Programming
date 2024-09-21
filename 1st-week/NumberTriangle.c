#include<stdio.h>
#include<conio.h>
void main()
{
int i,number,j,k,m;
printf("Enter any value for n:");
scanf("%d",& number);
m=1;
  for(i=1;i<=number;i++)
  {
      for(j=1;j<=number-i;j++)
      {
          printf("\t");
      }
          for(k=1;k<=i;k++)
          {
              printf("\t%d\t",m++);
          }
   printf("\n");
  }
getch();  
}