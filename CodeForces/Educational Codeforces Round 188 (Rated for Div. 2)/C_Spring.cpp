#include <stdio.h>
#include <stdlib.h>

long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int t;
    long long a, b, c, m;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%lld %lld %lld %lld", &a, &b, &c, &m);

        long long A = m/a;
        long long B = m/b;
        long long C = m/c;
        
        long long AB = m/lcm(a, b);
        long long AC = m/lcm(a, c);
        long long BC = m/lcm(b, c);

        long long ABC = m/lcm(a, lcm(b, c));

        long long alice = 6*A - 3*AB - 3*AC + 2*ABC;
        long long bob = 6*B - 3*AB - 3*BC + 2*ABC;
        long long charlie = 6*C - 3*AC - 3*BC + 2*ABC;

        printf("%lld %lld %lld\n", alice, bob, charlie);
    }

    return 0;
}