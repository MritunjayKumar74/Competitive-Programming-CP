#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d", &n);

        char s[n+1];
        scanf("%s", s);

        char prevChar = s[0];
        int count = 1;
        for(char x:s){
            if (x == 'L' and prevChar == 'R') {
                break;
            }
            
            else {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}