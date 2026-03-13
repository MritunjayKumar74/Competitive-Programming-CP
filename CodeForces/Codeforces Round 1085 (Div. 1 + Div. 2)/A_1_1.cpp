#include <stdio.h>
#include <stdlib.h>

int maximum(int n, char s[]) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            max++;
        }
    }
    
    for (int i = 1; i < n-1; i++){
        if (s[i] == '0' && s[i-1] == '1' && s[i+1] == '1') {
            max++;
        }
    }
    
    return max;
}

int minimum(int n, char s[]){
    int min = 0;
    
    for (int i = 1; i < n-1; i++){
        if (s[i] == '0' && s[i-1] == '1' && s[i+1] == '1') {
            s[i] = '1';
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            min++;
        }
    }
    for (int i = 1; i < n-1; i++){
        if (s[i] == '1' && s[i-1] == '1' && s[i+1] == '1') {
            s[i] = '0';
            min--;
        }
    }

    return min;
}

int main() {
    int t, n;
    char s[1000];
    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        scanf("%d", &n);
        scanf("%s", s);
        printf("%d %d\n", minimum(n, s), maximum(n, s));
    }
}