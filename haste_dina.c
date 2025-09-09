#include <stdio.h>
#include <stdlib.h>

// dados:
// tamanho n: 1   2   3   4   5   6   7   8   9   10
// valor:     1   5   8   9   10  17  17  20  24  30

int calculoHaste(int preco[], int n) {
    int *memoria = (int*)malloc((n + 1) * sizeof(int));
    memoria[0] = 0;
    
    for (int i = 1; i <= n; i++) {
        int valor_max = 0;
        for (int j = 0; j < i; j++) {
            int valor = preco[j] + memoria[i - j - 1];
            if (valor > valor_max) {
                valor_max = valor;
            }
        }
        memoria[i] = valor_max;
    }
    
    int resultado = memoria[n];
    free(memoria);
    return resultado;
}

int main() {
    int preco[] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int n = 10; // 1 a 10
    printf("Lucro max: %d\n", calculoHaste(preco, n));
}