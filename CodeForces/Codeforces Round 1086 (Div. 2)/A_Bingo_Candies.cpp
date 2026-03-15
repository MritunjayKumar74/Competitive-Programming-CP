#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int freq[10001] = {0};

        for (int i = 0; i < n*n; i++) {
            scanf("%d", &x);
            freq[x]++;
        }

        int limit = n*n - n + 1;
        bool answer = true;

        for (int j = 1; j <= n * n; j++) {
            if (freq[j] >= limit) {
                answer = false;
                break;
            }
        }

        if (answer) {
            printf("YES\n");
        }
        
        else {
            printf("NO\n");
        }
    }
    return 0;
}