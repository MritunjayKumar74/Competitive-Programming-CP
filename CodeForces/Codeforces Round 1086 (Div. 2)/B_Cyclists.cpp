#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, k, p, m;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d %d", &n, &k, &p, &m);
        int count = 0;
        int cards[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &cards[j]);
        }
        p = p - 1;

        while (m > 0){
            if (p < k){
                if(m < cards[p]){
                    break;
                }
                
                m = m - cards[p];
                count++;

                int temp = cards[p];
                
                for (int j = p; j < n - 1; j++){
                    cards[j] = cards[j + 1];
                }
                cards[n - 1] = temp;
                p = n - 1;
            }

            else{
                int cheapest = -1;

                for (int j = k - 1; j >= 0; j--) {
                    if (cheapest == -1 or cards[j] <= cards[cheapest]){
                        cheapest = j;
                    }
                }

                if (m < cards[cheapest]){
                    break;
                }

                m = m - cards[cheapest];

                int temp = cards[cheapest];
                for (int j = cheapest; j < n - 1; j++){
                    cards[j] = cards[j + 1];
                }
                cards[n - 1] = temp;
                p = p - 1;
            }
        }

        printf("%d\n", count);
    }
    return 0;
}