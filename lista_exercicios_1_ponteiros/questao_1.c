#include <stdio.h>
// Função que troca os valores de duas variáveis usando ponteiros
void troca(int *a, int *b){ 
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main(){
    int a, b;
    printf("Informe os valores\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Antes: \n a = %d, b = %d", a, b);
    // Chama a função
    troca(&a,&b);
    printf("\nDepois: \n a = %d, b = %d", a, b);
}