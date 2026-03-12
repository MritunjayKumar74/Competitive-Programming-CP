#include <stdio.h>
#include <stdlib.h>


int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        int product = 1;
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
            product *= arr[j];
        }

        if (product % 67 == 0){
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}