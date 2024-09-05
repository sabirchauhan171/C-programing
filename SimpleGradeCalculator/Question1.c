#include<stdio.h>
int main()
{
    int value;
    char ch;

    printf("Enter your marks: ",value);
    scanf("%d",&value);

    ch = value>=90 ? 'A' :
         value>=80 ? 'B' :
         value>=70 ? 'C' :
         value>=60 ? 'D' : 
         value>=50 ? 'E' : 'F';

    printf("Your grade is %c",ch);

    switch(ch){
        case 'A':
            printf("\nExcellent work!");
            break;
        case 'B':
            printf("\nWell done!");
            break;
        case 'C':
            printf("\nGood job!");
            break;
        case 'D':
            printf("\nYou passed!");
            break;
        case 'E':
            printf("\nPassed!");
            break;
        case 'F':
            printf("\nSorry you failed!");
            break;
    }

    if(ch=='F'){
        printf("\nPlease try again next time");
    }else{
        printf("\nCongratulations! You are eligible for the next level");
    }

    
       
}