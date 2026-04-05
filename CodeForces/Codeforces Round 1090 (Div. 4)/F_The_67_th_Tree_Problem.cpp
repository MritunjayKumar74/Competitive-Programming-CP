#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        int x, y, treeLength, k;
        scanf("%d %d", &x, &y);
        
        if(y < x || (x == 0 && y % 2 == 0)){
            printf("NO\n");
            continue;
        }
        
        printf("YES\n");
        
        if(x == 0){
            for(int i = 2; i <= y; i++)
                printf("1 %d\n", i);
            continue;
        }

        if((y - x) % 2 == 0){
            treeLength = 2 * x;
            k = y - x;
        }
        
        else {
            treeLength = 2 * x + 1;
            k = y - x - 1;
        }
        
        for(int i = 2; i <= treeLength; i++){
            printf("%d %d\n", i-1, i);
        }
        
        for(int i = treeLength + 1; i <= treeLength + k; i++){
            printf("1 %d\n", i);
        }
    }

    return 0;
}