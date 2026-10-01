#include <stdio.h>
int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    double c = (double) a/b;
    printf("%d / %d = %.2lf", a, b, c);
    return 0;
}