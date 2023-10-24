//
// Created by daniel on 10/3/23.
//
#include "../fibonacci.h"

unsigned long long fib_ricorsivo(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fib_ricorsivo(n - 1) + fib_ricorsivo(n - 2);
    }
}