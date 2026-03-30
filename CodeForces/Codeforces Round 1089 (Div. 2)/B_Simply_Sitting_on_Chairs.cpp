#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        int n;
        scanf("%d", &n);
        
        int dp[n+1];

        for(int j = 1; j <= n; j++){
            scanf("%d", &dp[j]);
        }
        
        int count = 0;

        for(int j = 1; j <= n; j++){
            if(dp[j] <= j) count++;
        }
        
        printf("%d\n", count);
    }
    return 0;
}