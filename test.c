#include <stdio.h>
#include <gmp.h>

int main() {
    mpz_t a;
    mpz_init_set_str(a, "123456789", 10);
    gmp_printf("a = %Zd\n", a);
    mpz_clear(a);
    return 0;
}
