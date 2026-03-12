#include <stdio.h>
#include <stdlib.h>


int main() {
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d", &n);
        int arr[n];
        arr[0] = 1;
        int flip = 1;
        for (int j = 1; j < n; j++){
            if (flip == 1){
                arr[j] = arr[j-1] + n - j;
            }
            else{
                arr[j] = arr[j-1] - (n - j);
            }
            flip = flip * (-1);
        }

        for (int j = n-1; j >= 0; j--){
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
}