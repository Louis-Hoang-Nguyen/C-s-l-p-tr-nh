#include <stdio.h>

int main(void) {
    unsigned long long money;
    int menh_gia[9] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    if (scanf("%llu", &money) != 1) {
        return 1;
    }
    for (int i = 0; i < 9; i++)
    {
        long long dem = money / menh_gia[i];
        money = money % menh_gia[i];
        printf("%d : %llu\n", menh_gia[i], dem);
    }
    return 0;
}