#include <stdio.h>
#include <stdlib.h>


// contagem
long long contador = 0;


// Fibonacci recursivo normal
long long fibo_normal(int n) {
    contador++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo_normal(n - 1) + fibo_normal(n - 2);
}


int main() {
    int n = 1000;

    contador = 0;
    long long resultado = fibo_normal(n);
    printf("\n[Normal] Fib(%d) = %lld\n", n, resultado);
    printf("Chamadas recursivas (normal): %lld\n", contador);

}
