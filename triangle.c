#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; // test cases
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int k; // height
        char c; // character
        scanf("%d %c", &k, &c);
        printf("CASE %d:\n", i);

        for (int x = 1; x <= k; x++){
            for (int blank = 0; blank < k-x; blank++)
                printf(" ");
    
            for (int y = 0; y <= (2*x)-2; y++)
                printf("%c", c);
            printf("\n");
        }
    }
    return 0;
}
