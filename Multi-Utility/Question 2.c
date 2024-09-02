#include <stdio.h>
#include <conio.h>

int main()
{
    float basesalary,hira,da,ta,gross_salary;
    printf("enter base salary");
    scanf("%f",&basesalary);

    printf("enter hira: ");
    scanf("%f",&hira);

    printf("enter da: ");
    scanf("%f",&da);

    printf("enter ta: ");
    scanf("%f",&ta);
    gross_salary = basesalary + hira + da + ta;
    printf("gross salary: %.2f\n", gross_salary);
    return 0;
}