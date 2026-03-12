#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i< t; i++) {
        scanf("%d", &n);

        int p[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &p[i]);
        }

        for (int i = 0; i < n; i++) {
            int pos = i;
            for (int j = i; j < n; j++) {
                if (p[j] > p[pos]) {
                    pos = j;
                }
            }

            if (pos != i) {
                for (int l = i, r = pos; l < r; l++, r--) {
                    int temp = p[l];
                    p[l] = p[r];
                    p[r] = temp;
                }
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
    }

    return 0;
}
