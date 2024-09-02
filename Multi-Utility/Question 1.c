#include <stdio.h>
#include <conio.h>

void main() 
{
    float celsius;
    float f;
    
    
    printf("Enter the value of celsius: ");
    scanf("%f",&celsius) ;
    f = celsius *9/5 + 32;
    printf("the value of fahrenheit is:%.2f\n",f);
    
} 