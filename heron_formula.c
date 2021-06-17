#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; // number of cases
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int a, b, c; // 3 positive integer
        scanf("%d %d %d", &a, &b, &c);
        printf("CASE %d: ", i);
        if (a+b <= c)
            printf("NO TRIANGLE FORMED");
        else{
            double s = .5 * (a+b+c);
            double heron = sqrt(s * (s-a) * (s-b) * (s-c));
            printf("%.3f", heron);
        }
        printf("\n");
    }
    return 0;
}
