#include <stdio.h>
int main(void) {
    double percent;
    double quota;
    scanf("%lf %lf", &percent, &quota);
    if (percent > 0 && quota > 0) {
        printf("%.2lf", quota / (percent/100));
    }
    else {
        return 1;
    }
    return 0;
}
