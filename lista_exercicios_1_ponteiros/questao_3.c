#include <stdio.h>
#include <locale.h>
void main(){
    setlocale(LC_ALL, "Portuguese");
    int x = 10;
    int *ptr;

    ptr = &x; // Ponteiro recebe o endere�o da vari�vel

    printf("----------------------------------------\n");
    printf("Valor declarada da vari�vel: %d\n", x);
    printf("Endere�o da vari�vel x: %p\n", (void*)&x);
    printf("Valor do ponteiro (endere�o recebido): %p\n", (void*)ptr);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr);
    printf("----------------------------------------");
}