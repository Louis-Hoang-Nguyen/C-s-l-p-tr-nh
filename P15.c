#include <stdio.h>
int main(void) {
    double km;
    double hour;
    double minute;
    double second;
    double Time;
    double pace;
    double speed;
    scanf("%lf %lf %lf %lf", &km, &hour, &minute, &second);
    if (km > 0) {
        Time = 3600*hour + 60*minute + second;
        pace = Time/(60*km);
        speed = 3600*km/Time;
        printf("%.2lf %.2lf\n", pace, speed);
    }
    else {
        return 1;
    }
    return 0;
}