#include <stdio.h>
#include <conio.h>

void main() 
{
    float celsius;
    float result;
    
    
    printf("Enter the value of celsius: ");
    scanf("%f",&celsius) ;
    result = celsius *9/5 + 32;
    printf("the value of fahrenheit is:%.2f\n",result);
    
} 