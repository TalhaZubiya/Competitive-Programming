#include <stdio.h>
#include <math.h>

int main() {
    double N;
    scanf("%lf", &N);


    int total_cents = (int)round(N * 100);

    int notes_values[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins_values[] = {100, 50, 25, 10, 5, 1};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = total_cents / notes_values[i];
        total_cents %= notes_values[i];
        printf("%d nota(s) de R$ %.2f\n", count, notes_values[i] / 100.0);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = total_cents / coins_values[i];
        total_cents %= coins_values[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins_values[i] / 100.0);
    }

    return 0;
}
