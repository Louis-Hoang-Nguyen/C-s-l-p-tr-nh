#include <stdio.h>
int main(void) {
    unsigned int plate;
    int Tong = 0; 
    int so_cuoi;

    scanf("%u", &plate);

    while (plate > 0)
    {
        Tong += plate % 10;
        plate /= 10;
    }

    so_cuoi = Tong % 10;

    printf("%d\n", so_cuoi);   
    return 0;
}