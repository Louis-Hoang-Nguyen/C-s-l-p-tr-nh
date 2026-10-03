#include <stdio.h>
int main(void) {
    const double PI = 3.14;
    double radius;
    double chuvi;
    double S;
    scanf("%lf", &radius);
    if (radius > 0) {
        chuvi = 2*PI*radius;
        S = PI * radius * radius;
        printf("%.2lf %.2lf\n", chuvi, S);
    }
    else {
        return 1;
    }
    return 0;
}