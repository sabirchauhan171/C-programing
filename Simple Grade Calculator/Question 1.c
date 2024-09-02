New! Keyboard shortcuts … Drive keyboard shortcuts have been updated to give you first-letters navigation
#include<stdio.h>
int main()
{
    int value;

    printf("Enter your marks: ",value);
    scanf("%d",&value);

    if (value<26)
    {
        printf("Your grade is : F.");
    } 
    else if (value<45)
    {
        printf("Your grade is : E.");
    } 
    else if (value<50)
    {
        printf("Your grade is : D.");
    }
     else if (value<60)
    {
        printf("Your grade is  C.");
    }
     else if (value<80)
    {
        printf("Your grade is : B.");
    } 
    else if (value=80||value>80)
    {
        printf("Your grade is : A.");
    }
       
}