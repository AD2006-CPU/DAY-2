#include<stdio.h>
int main() 
{
    float celsius,fahrenheit;
    printf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("celsius=%f\n",celsius);
    printf("Enter the temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit=((celsius*9)/5)+32;
    printf("fahreheit=%f\n",fahrenheit);
    return 0;
}

