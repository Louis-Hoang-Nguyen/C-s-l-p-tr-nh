#include <stdio.h>
int main(void) {
    double radius;
    double height;
    double V;
    const double PI = 3.14;
    scanf("%lf %lf", &radius, &height);
    if (radius > 0 && height > 0) {
        V = PI * radius * radius * height;
        printf("%.2lf\n", V);
    }
    else {
        return 1;
    }
    return 0;
}