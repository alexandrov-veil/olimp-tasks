#include <stdio.h>

int get_time(int a, int b, int c);

int main() {
    
    int time;
    signed int f_time, f_zone, s_zone;
    // f - first, s - second

    scanf("%d", &f_time);
    scanf("%d", &f_zone);
    scanf("%d", &s_zone);

    time = get_time(f_time, f_zone, s_zone);

    printf("%d\n", time);
    return 0;

}

int get_time(int a, int b, int c) {

    int utc, time;

    if (b <= 0) utc = -b + a;
    else utc = a - b;

    time = utc + c;

    if (time >= 24) time = time - 24;
    else if (time < 0) time = time + 24;

    return time;

}