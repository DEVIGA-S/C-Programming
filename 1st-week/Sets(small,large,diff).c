#include<stdio.h>
int main()
{
int number1,i,k,number2,maximum,minimum,difference;
printf("Enter the total number of elements in the set:");
scanf("%d",&number1);
printf("Enter the number1:");
scanf("%d",&k);
maximum=k;
minimum=k;
for(i=1;i<number1;i++)
{
    printf("Enter the number%d:",i+1);
    scanf("%d",&number2);
    if(number2>=maximum)
    maximum=number2;
     else if(number2<=minimum)
    minimum=number2;
}
printf("\nThe largest number is %d",maximum);
printf("\nThe smallest number is %d",minimum);
difference=maximum-minimum;
printf("\nThe difference between largest and smallest number is %d",difference);
return 0;
}