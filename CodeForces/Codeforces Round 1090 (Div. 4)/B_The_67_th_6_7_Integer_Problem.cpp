#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++){

        int a[7];

        for (int j = 0; j < 7; j++){
            scanf("%d", &a[j]);
        }

        int max = a[0];

        for (int j = 0; j < 7; j++){
            if (a[j] > max){
                max = a[j];
            }
        }

        int maxSum = 0;
        int count = 0;

        for (int j = 0; j < 7; j++){
            if (a[j] == max and count == 0){
                maxSum += a[j];
                count++;
            }
            else{
                maxSum -= a[j];
            }
        }

        printf("%d\n", maxSum);
    }

    return 0;
}