#include <stdio.h>

long long ackermann(long long m, long long n) {
    if (m == 0)
        return n + 1;
    else if (n == 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    long long m, n;

    printf("Enter m and n: ");
    scanf("%lld %lld", &m, &n);

    printf("Ackermann(%lld, %lld) = %lld\n", m, n, ackermann(m, n));

    return 0;
}
