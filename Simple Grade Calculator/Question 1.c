New! Keyboard shortcuts … Drive keyboard shortcuts have been updated to give you first-letters navigation
#include<stdio.h>
int main()
{
    int value;

    printf("Enter your marks: ",value);
    scanf("%d",&value);

    if (value<26)
    {
        printf("Your grade is : F.Please try again next time");
    } 
    else if (value<45)
    {
        printf("Your grade is : E.Congratulations! You are eligible for the next level");
    } 
    else if (value<50)
    {
        printf("Your grade is : D.Congratulations! You are eligible for the next level");
    }
     else if (value<60)
    {
        printf("Your grade is  C.Congratulations! You are eligible for the next level");
    }
     else if (value<80)
    {
        printf("Your grade is : B.Congratulations! You are eligible for the next level");
    } 
    else if (value=80||value>80)
    {
        printf("Your grade is : A.Congratulations! You are eligible for the next level");
    }
       
}