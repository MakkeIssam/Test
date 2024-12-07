#include <stdio.h>
#include <stdlib.h>
#include "factorielle.h"

int facto(int n) {
    if (n <= 1) return 1;
    return (facto(n - 1) * n);
}

int est_premier(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int exp_rapide(int base, int exp, int mod) {
    int result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return result;
}
