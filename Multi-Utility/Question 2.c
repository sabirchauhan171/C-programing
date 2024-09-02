#include <stdio.h>


int main()
{
    float basesalary,HRA,DA,TA,gross_salary;
    printf("enter base salary :");
    scanf("%f",&basesalary);

    HRA=basesalary*10/100;

    printf("enter HRA in persentage : \n");
    scanf("%f",&HRA);
    DA=basesalary*5/100;

    printf("enter DA in persentage : \n");
    scanf("%f",&DA);
    TA=basesalary*8/100;

    printf("enter TA in persentage : \n");
    scanf("%f",&TA);
    
 
    gross_salary = basesalary + HRA + DA + TA;
    printf("gross salary: %.2f\n", gross_salary);
    return 0;
}