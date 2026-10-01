#include <stdio.h>
int main(void) {
    unsigned long long previous;
    unsigned long long current;
    if (scanf("%llu %llu", &previous, &current) == 2) 
    {
        if (previous >= 0 && previous <= current) 
        {
            printf("%llu\n", current - previous);
        }
        else 
        {
            return 1;
        }
    }
    else 
    {
        return 1;
    }
    return 0;
}
