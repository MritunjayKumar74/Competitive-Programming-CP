#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d", &t);

    long long primeNumber[10001];
    
    int count = 0;
    
    long long num = 2;
    
    while(count < 10001){
        int isPrime = 1;
        for(long long i = 2; i * i <= num; i++){
            if(num % i == 0){
                isPrime = 0;
                break;
            }
        }

        
        if(isPrime){
            primeNumber[count++] = num;
        }
        
        num++;
    }

    for (int i = 0; i < t; i++){
        
        int n;
        scanf("%d", &n);
        
        printf("%lld ", primeNumber[0]);
        
        for(int i = 1; i < n; i++){
            printf("%lld ", primeNumber[i-1] * primeNumber[i]);
        }
        
        printf("\n");
    }

    return 0;
}