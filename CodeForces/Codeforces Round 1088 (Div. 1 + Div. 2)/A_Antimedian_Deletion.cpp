#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);

        int p[101];

        for (int j = 0; j < n; j++) {
            scanf("%d", &p[j]);
        }

        for (int j = 0; j < n; j++) {
            
            if (n == 1) {
                printf("1");
            }
            
            else {
                printf("2");
            }
            
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}