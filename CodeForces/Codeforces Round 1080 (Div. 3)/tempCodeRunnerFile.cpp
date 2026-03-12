#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int is_adjacent(int a, int b) {
    if (a == b){
        return 0;
    }
    if (a + b == 7){
        return 0;
    }

    return 1;
}

int main() {
    int t, n;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }
        
        if (n == 1) {
            printf("0\n");
            continue;
        }
        
        vector<vector<int>> dp(n + 1, vector<int>(7, INT_MAX));
        
        for (int j = 1; j <= 6; j++) {
            if (j == arr[0]) {
                dp[1][j] = 0;
            }
            else {
                dp[1][j] = 1;
            }
        }
        
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= 6; j++) {
                int change_cost;
                
                if (arr[i - 1] == j){
                    change_cost = 0;
                }
                else {
                    change_cost = 1;
                }
                
                for (int prev = 1; prev <= 6; prev++) {
                    if (is_adjacent(prev, j)) {
                        dp[i][j] = min(dp[i][j], dp[i - 1][prev] + change_cost);
                    }
                }
            }
        }
        
        int result = INT_MAX;
        for (int j = 1; j <= 6; j++) {
            result = min(result, dp[n][j]);
        }
        
        printf("%d\n", result);
    }
    
    return 0;
}