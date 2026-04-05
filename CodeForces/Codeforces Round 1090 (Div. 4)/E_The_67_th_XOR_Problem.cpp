#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        
        int n;
        scanf("%d", &n);
        
        int a[n];
        
        for(int j = 0; j < n; j++){
            scanf("%d", &a[j]);
        }
        
        int ans = 0;
        
        for(int j = 0; j < n; j++){
            for(int k = j+1; k < n; k++){
                if((a[j]^a[k]) > ans){
                    ans = a[j]^a[k];
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}