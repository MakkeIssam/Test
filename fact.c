#include <stdio.h>
#include <stdlib.h>

#include "fact.h"

int facto(int n) {
    if (n <= 1) return 1;
    return (facto(n - 1) * n);
}