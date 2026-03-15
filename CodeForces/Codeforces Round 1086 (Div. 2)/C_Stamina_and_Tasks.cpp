#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int c[n], p[n];
        for (int j = 0; j < n; j++) {
            scanf("%d %d", &c[j], &p[j]);
        }

        double dp = 0.0;
        
        for (int j = n-1; j >= 0; j--) {
            double q = 1.0 - (double)p[j] / 100.0;

            if (dp < c[j] + q * dp) {
                dp = c[j] + q * dp;
            }
            else{
                dp = dp;
            }
        }
        
        printf("%.10f\n", dp);
    }
    return 0;
}