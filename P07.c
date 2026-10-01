#include <stdio.h>
#include <math.h>
int main(void) {
    const double PI = 3.14;
    int goc;
    scanf("%d", &goc);
    printf("%.2lf\n", sin((double)goc * PI / 180));
    return 0;
}