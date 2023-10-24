//
// Created by daniel on 10/4/23.
//

#include "../fibonacci.h"

unsigned long long fib_iterativo(int n){
    if (n <= 1)
        return 1;

    unsigned long long fibonacci[n];
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    for (int i = 2; i < n; i++) {
        for (int j = 0; j < 100000; j++) {
            // Loop vuoto che rallenta l'esecuzione
        }
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i -2];
    }
    return fibonacci[n-1];
}