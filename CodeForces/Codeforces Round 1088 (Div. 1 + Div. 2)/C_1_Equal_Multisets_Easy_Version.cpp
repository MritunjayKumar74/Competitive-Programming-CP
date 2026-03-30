#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n];
        int b[n];
        int count[n] = {0};

        for (int j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }

        for (int j = 0; j < n; j++){
            scanf("%d", &b[j]);
        }

        bool unique = true;

        for (int j = 0; j < n; j++) {
            if (b[j] != -1) {
                if (count[b[j]]) {
                    unique = false;
                    break;
                }
                count[b[j]] = 1;
            }
        }

        if (unique) {
            printf("YES\n");
        }
        
        else {
            printf("NO\n");
        }

        for (int j = 0; j < n; j++) {
            if (b[j] != -1) count[b[j]] = 0;
        }
    }

    return 0;
}