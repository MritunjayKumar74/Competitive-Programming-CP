#include <stdio.h>
#include <stdlib.h>

long long gcd(long long a, long long b){
    
    while(b){
        long long t=a%b;
        a=b;
        b=t;
    }
    
    return a;
}

int main(){
    int t;
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        
        int n;
        scanf("%d", &n);
        
        long long a[n+2];
        
        for(int j = 1; j <= n; j++){
            scanf("%lld", &a[j]);
        }
        
        long long b[n+2];
        
        for(int j = 1; j <= n; j++){
            scanf("%lld", &b[j]);
        }
        
        int count = 0;
        
        for(int j = 1; j <= n; j++){

            int valid = 1;
            long long left, right, x, y;
            
            if(j > 1){
                left = gcd(a[j-1], a[j]);
            }
            
            else{
                left = -1;
            }
            
            if(j < n){
                right = gcd(a[j], a[j+1]);
            }

            else{
                right = -1;
            }
            
            if(left == -1){
                x = right;
            }

            else if(right == -1){
                x = left;
            }
            
            else {
                y = left / gcd(left, right) * right;
                x = y;
            }
            
            if(x < 1 || x > a[j] || x == a[j]){
                continue;
            }
            
            
            if(j > 1 && gcd(a[j-1], x) != left){
                valid = 0;
            }
            
            if(j < n && gcd(a[j+1], x) != right){
                valid = 0;
            }
            
            if(valid){
                count++;
            }
        }
        
        printf("%d\n", count);
    }
    return 0;
}