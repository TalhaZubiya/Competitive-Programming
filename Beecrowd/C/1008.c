#include <stdio.h>
 
int main() {
 
    int NUMBER,HOURS;
    float AMOUNT_PER_HOUR,SALARY;
    scanf("%d",&NUMBER);
    printf("NUMBER = %d\n",NUMBER);
    scanf("%d",&HOURS);
    scanf("%f",&AMOUNT_PER_HOUR);
    SALARY = HOURS*AMOUNT_PER_HOUR;
    printf("SALARY = U$ %.2f\n",SALARY);
 
    return 0;
}