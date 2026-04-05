#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        int x;
        scanf("%d", &x);

        if (x < 67){
            printf("%d\n", x + 1);
        }
        else{
            printf("%d\n", x);
        }
    }

    return 0;
}