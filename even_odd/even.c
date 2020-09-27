#include <stdio.h>

int even_odd(int a, int b);

int main() {

    int difer;
    int n, k;

    scanf("%d", &n);
    scanf("%d", &k);

    difer = even_odd(n, k);

    printf("%d\n", difer);
    return 0;

}

int even_odd(int a, int b) {

    int dif, even, odd;
    dif = even = odd = 0;

    for (int i = a; i <= b; ++i) {
        if ((i % 2) == 0) even = even + i;
        else odd = odd + i;  
    }

    dif = even - odd;
    return dif;

}
