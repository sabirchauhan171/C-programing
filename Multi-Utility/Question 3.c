#include<stdio.h>

int main()
{
    int First_angle,Second_angle,Third_angle;
    printf("Enter the first angle : ");
    scanf("%d",&First_angle);
    printf("Enter the Second number :");
    scanf("%d",&Second_angle);
    Third_angle=180-First_angle-Second_angle;
    printf("Third angle is : %d",Third_angle);
    
}