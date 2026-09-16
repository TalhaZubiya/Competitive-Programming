#include <stdio.h>
 
int main() {
 
    int code1, code2, quantity1, quantity2;
    double price1, price2, total;
    scanf("%d %d %lf", &code1, &quantity1, &price1);
    scanf("%d %d %lf", &code2, &quantity2, &price2);
    total = (quantity1 * price1) + (quantity2 * price2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}