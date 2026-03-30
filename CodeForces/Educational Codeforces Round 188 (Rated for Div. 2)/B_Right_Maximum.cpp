#include <stdio.h>
#include <stdlib.h>

int main() {
    int t ,n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);

        int a[n];
        for (int j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }

        int count = 0, currentMaximum = a[0];
        
        for (int j = 0; j < n; j++){
            if (a[j] >= currentMaximum) {
                currentMaximum = a[j];
                count++;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}