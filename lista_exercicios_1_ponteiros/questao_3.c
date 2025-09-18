#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int x = 10;
    int *ptr;

    ptr = &x; // Ponteiro recebe o endereço da variável

    printf("----------------------------------------\n");
    printf("Valor declarada da variável: %d\n", x);
    printf("Endereço da variável x: %p\n", (void*)&x);
    printf("Valor do ponteiro (endereço recebido): %p\n", (void*)ptr);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr);
    printf("----------------------------------------");
}