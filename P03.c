#include <stdio.h>
int main(void) {
    unsigned int so_luong;
    double don_gia;
    double tong;
    scanf("%u", &so_luong);
    scanf("%lf", &don_gia);
    printf("%.0lf\n", tong = (so_luong * don_gia)*1.1);
    return 0;
}