#include <stdio.h>
 
int main() {
 
    char name[100];
    double FixedSalary;
    double TotalSales;
    double TotalSalary;
    scanf("%s", name);
    scanf("%lf", &FixedSalary);
    scanf("%lf", &TotalSales);
    TotalSalary = FixedSalary + (TotalSales * 0.15);
    printf("TOTAL = R$ %.2lf\n", TotalSalary);

 
    return 0;
}