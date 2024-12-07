#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

#include "fact.h"
#include "Premier.h"


int main(int argc, char** argv){

    int n = atoi(argv[1]);
    int res1;
    int k = atoi(argv[2]);
    int res2;
    
    res1 = facto(n);
    res2 = est_premier(k);
    printf("%d factoriel = %d \n", n, res1);
    printf("%d est premier ??  = %d \n", k, res2);
    return 0;
}
