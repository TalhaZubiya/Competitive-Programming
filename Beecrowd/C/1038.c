#include <stdio.h>
 
int main() {
 
    int X, Y;
    double total, price;
    scanf("%d %d", &X,&Y);
    switch(X)
    {
        case 1:
        price = 4.00;
        break;
        case 2:
        price = 4.50;
        break;
        case 3:
        price = 5.00;
        break;
        case 4:
        price = 2.00;
        break;
        case 5:
        price = 1.50;
        break;
        default:
        price = 0.00;
        break;
    }
    total = price * Y;
    printf("Total: R$ %.2lf\n", total);
        
 
    return 0;
}