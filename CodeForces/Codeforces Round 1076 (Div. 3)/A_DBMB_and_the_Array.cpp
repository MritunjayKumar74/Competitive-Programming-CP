#include <stdio.h>
#include <stdlib.h>


int main() {
    int t, n, s, x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d %d %d", &n, &s, &x);
        int arr[n];
        int sum = 0;
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[j]);
            sum += arr[j];
        }

        if (sum > s){
            printf("NO\n");
        }

        else if ((s - sum) % x == 0){
            printf("YES\n");
        }

        else{
            printf("NO\n");
        }
    }
}