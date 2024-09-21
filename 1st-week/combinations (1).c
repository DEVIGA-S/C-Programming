#include <stdio.h>
#include<conio.h>
void main()
{
int i,number,j,r;
printf("Enter the number of digit:");
scanf("%d",&number);
    
    for(i=1;i<=number;i++)
    {
        for(j=1;j<=number;j++)
        {
            for(r=1;r<=number;r++)
            {
                printf("\n %d %d %d ",i,j,r);
            }
        }
    }
getch();
}