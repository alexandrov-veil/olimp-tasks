#include <stdio.h>
#define MAX 3

int min(int m[]);
int max(int m[]);

int main(){

    int f, s, t;
    int m[MAX];
    int max_elem, min_elem, med;

    scanf("%d", &f);
    scanf("%d", &s);
    scanf("%d", &t);
    
    m[0] = f;
    m[1] = s,
    m[2] = t;

    max_elem = max(m);
    min_elem = min(m);

    med = f + s + t - max_elem - min_elem;
    printf("%d\n", med);
    return 0;

}

int max(int m[]) {
    int max = m[0];
    for (int i = 0; i < MAX; ++i)
        if (m[i] > max) max = m[i]; 

    return max;
}

int min(int m[]) {
    int min = m[0];
    for (int i = 0; i < MAX; ++i)
        if (m[i] < min) min = m[i];

    return min;
}
