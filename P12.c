#include <stdio.h>
int main(void) {
    double perimeter;
    double a;
    double S;
    scanf("%lf", &perimeter);
    if (perimeter > 0) {
        a = 0.3 * perimeter;
        S = ((double) 2/3) * a * a;
        printf("%.2lf\n", S);
    }
    else {
        return 1;
    }
    return 0;
}