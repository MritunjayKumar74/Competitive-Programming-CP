#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        unsigned int x, y;
        scanf("%u %u", &x, &y);
        
        unsigned int p = x;
        unsigned int q = y & ~x;
        
        printf("%u %u\n", p, q);
    }
    return 0;
}