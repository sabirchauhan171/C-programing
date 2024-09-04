#include <stdio.h>


int main()
{
    float basesalary,HRA,DA,TA,gross_salary;
    printf("enter base salary :");
    scanf("%f",&basesalary);

    
    printf("enter HRA in persentage : \n");
    scanf("%f",&HRA);
    HRA=basesalary * HRA /100;
    

    printf("enter DA in persentage : \n");
    scanf("%f",&DA);
    DA=basesalary * DA /100;
    
    printf("enter TA in persentage : \n");
    scanf("%f",&TA);
    TA=basesalary * TA /100;
    
 
    gross_salary = basesalary + HRA + DA + TA;
    printf("gross salary: %.2f\n", gross_salary);
    return 0;
}