#include <stdio.h>
#include <locale.h>

void calc(float a, float b, float *soma, float *sub, float *mult, float *div){
    *soma = a + b;
    *sub = a - b;
    *mult = a * b;
    if (b != 0) {
        *div = a / b;
    } else {
        *div = 0; // evita divisão por zero
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    float x, y, soma, sub, mult, div;
    

    printf("Digite o primeiro número: ");
    scanf("%f", &x);
    printf("Digite o segundo número: ");
    scanf("%f", &y);

    calc(x, y, &soma, &sub, &mult, &div);
    printf("\nResultados:\n");
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", sub);
    printf("Multiplicação: %.2f\n", mult);
    if (y != 0)
        printf("Divisão: %.2f\n", div);
    else
        printf("Divisão: impossível por zero\n");
}