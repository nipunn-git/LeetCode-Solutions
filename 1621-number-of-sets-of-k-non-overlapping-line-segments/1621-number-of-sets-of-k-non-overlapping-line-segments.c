#include <stdio.h>

static const int MOD = 1000000007;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

long long modInverse(long long n) {
    return power(n, MOD - 2);
}

int nCr(int N, int K) {
    if (K < 0 || K > N) return 0;
    if (K == 0 || K == N) return 1;
    if (K > N / 2) K = N - K;

    long long num = 1, den = 1;
    for (int i = 0; i < K; i++) {
        num = (num * (N - i)) % MOD;
        den = (den * (i + 1)) % MOD;
    }

    return (num * modInverse(den)) % MOD;
}

int numberOfSets(int n, int k) {
    int N = n + k - 1;
    int K = 2 * k;
    return nCr(N, K);
}