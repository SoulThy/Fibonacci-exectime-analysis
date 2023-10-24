//
// Created by daniel on 10/4/23.
//

#include "../fibonacci.h"

unsigned long long fib_iterativo2(int n){
    unsigned long long a, b, c;
    a = 1;
    b = 1;
    c = 1;
    for (int i = 3; i <= n; i++) {
        for (int j = 0; j < 100000; j++) {
            // Loop vuoto che rallenta l'esecuzione
        }
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
