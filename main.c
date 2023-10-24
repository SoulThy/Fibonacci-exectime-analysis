#include <stdio.h>
#include <time.h>
#include "fibonacci.h"
#define MAX_INSTANCES 44

void writeFibonacciData(char *fileName, unsigned long long (*fibFunction)(int)) {
    clock_t time;
    unsigned long long value;

    FILE *fp = fopen(fileName, "w");
    if (!fp) {
        printf("[!] Error opening file");
        return;
    }

    fprintf(fp, "NUM-INSTANCES,CLOCK-TIME,VALUE\n");
    for (int i = 0; i < MAX_INSTANCES; i++) {
        time = clock();
        value = fibFunction(i);
        time = clock() - time;
        fprintf(fp, "%d,%ld,%llu\n", i, (long)time, value);
    }

    fclose(fp);
}

int main() {
    char *fileName1 = "fib_ricorsivo_data.csv";
    char *fileName2 = "fib_iterativo_data.csv";
    char *fileName3 = "fib_iterativo2_data.csv";

    /* FIBONACCI RICORSIVO */
    writeFibonacciData(fileName1, fib_ricorsivo);

    /* FIBONACCI ITERATIVO */
    writeFibonacciData(fileName2, fib_iterativo);

    /* FIBONACCI ITERATIVO2 */
    writeFibonacciData(fileName3, fib_iterativo2);

    return 0;
}