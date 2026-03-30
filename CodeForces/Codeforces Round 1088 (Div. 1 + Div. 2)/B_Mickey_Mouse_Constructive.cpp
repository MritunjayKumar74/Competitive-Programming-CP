#include <stdio.h>
#include <stdlib.h>

const int MOD = 676767677;

int countDivisors(int n) {
    
    if (n == 0){
        return 1;
    }

    int count = 0;
    for (int i = 1; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (i != n / i){
                count++;
            }
        }
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        int S = abs(x - y);
        
        long long f;

        if (x > 0 && y > 0 && x == y) {
            f = 1;
        }
        
        else {
            f = countDivisors(S);
        }
        
        printf("%lld\n", f % MOD);
        
        for (int j = 0; j < x; j++) {
            if (j > 0){
                printf(" ");
            }

            printf("1");
        }
        
        for (int j = 0; j < y; j++) {
            if (x > 0 || j > 0){
                printf(" ");
            }
        printf("-1");
    }
        printf("\n");
    }
    
    return 0;
}