#include <stdio.h>
#include <stdlib.h>


long long contador = 0;

// Fibonacci recursivo com memoization
long long fibo_dinamico(int n, long long *memo) {
    contador++;

    if (memo[n] != -1) return memo[n]; 

    if (n == 0) return memo[0] = 0;
    if (n == 1) return memo[1] = 1;

    memo[n] = fibo_dinamico(n - 1, memo) + fibo_dinamico(n - 2, memo);
    return memo[n];
}

int main() {
    int n = 1000;

    contador = 0;
    long long *memo = (long long*) malloc((n+1) * sizeof(long long));
    for (int i = 0; i <= n; i++) memo[i] = -1;

    long long resultado= fibo_dinamico(n, memo);
    printf("\n[Dinamico] Fib(%d) = %lld\n", n, resultado);
    printf("Chamadas recursivas (dinamico): %lld\n", contador);

    free(memo);

    return 0;
}