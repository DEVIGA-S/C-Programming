#include <stdio.h>
#include<conio.h>
void main() {
int number1, number2,gcd;
printf("Enter the number 1: ");
scanf("%d",&number1);
printf("Enter the number 2:");
scanf("%d",&number2);
    for (int i = 1; i <= number1 && i <= number2; i++)
    {
        if (number1 % i == 0 && number2 % i == 0) {
            gcd = i;
        }
    }

    
  printf("GCD of %d and %d is: %d\n", number1, number2, gcd);
getch();
}
