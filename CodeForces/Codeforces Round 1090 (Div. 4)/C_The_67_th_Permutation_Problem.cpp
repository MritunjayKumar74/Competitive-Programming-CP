#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);

        int first = 1; 
        int last = n*3;

        for (int j = 0; j < n; j++){
            printf("%d %d %d ", first, last - 1, last);

            first++;
            last -= 2;
        }
        printf("\n");
    }

    return 0;
}