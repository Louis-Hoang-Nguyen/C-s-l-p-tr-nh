#include <stdio.h>
#include <math.h>
int main(void) {
    double a;
    double b;
    double c;
    double p;
    double S;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a > 0, b > 0, c > 0 && a+b > c && a+c > b && b+c > a) {
        p = (a+b+c)/ 2;
        S = sqrt(p*(p - a)*(p - b)*(p - c));
        printf("%.2lf %.2lf\n", p*2, S);
    }
    else {
        return 1;
    }
    return 0;
}