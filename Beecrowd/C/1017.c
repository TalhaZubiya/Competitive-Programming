#include <stdio.h>
 
int main() {
 
    int time, speed, distance;
    double fuel;
    scanf("%d %d", &time, &speed);

    distance = time * speed;
    fuel = distance / 12.0;

    printf("%.3lf\n", fuel);
 
    return 0;
}