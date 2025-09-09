#include <stdio.h>

// tamanho n: 1   2   3   4   5   6   7   8   9   10
// valor:     1   5   8   9   10  17  17  20  24  30

int calculoHaste (int preco[], int n) {
    if (n <= 0) {
        return 0;
    }
    int valor_max = 0;

    for (int i = 0; i <= n - 1; i++) {
        int valor = preco[i] + calculoHaste(preco, n - i - 1);
        if (valor > valor_max) {
            valor_max = valor;
        }
    }
    return valor_max;
}

int main() {
    int preco[] = {1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    int n = 6; // 1 a 10
    printf("Lucro max: %d\n", calculoHaste(preco, n));
}