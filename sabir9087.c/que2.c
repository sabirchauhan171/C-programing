#include<stdio.h>
void main()
{ 
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    a+=b;
    b-=a;
    a+=b;
    
}