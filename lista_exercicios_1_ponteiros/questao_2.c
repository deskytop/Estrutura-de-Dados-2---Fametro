#include <stdio.h>

// Encontrar o maior e menor valor do array
void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    *maior = array[0]; // inicializa com o primeiro elemento
    *menor = array[0];
    for (int i = 1; i < tamanho; i++) {
        if (array[i] > *maior) {
            *maior = array[i];
        }
        if (array[i] < *menor) {
            *menor = array[i];
        }
    }
}

void main() {
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    int valores[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    int maior, menor;
    // Chama a função
    encontrarMaiorMenor(valores, n, &maior, &menor);
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
}