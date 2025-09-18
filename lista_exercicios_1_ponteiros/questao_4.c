#include <stdio.h>;
#include <locale.h>;

void dobrar(int *x){
    *x = *x * 2;
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    int x;

    printf("Informe um valor:\n");
    scanf("%d", &x);

    printf("Valor normal: %d\n", x);

    dobrar(&x);
    printf("Valor dobrado: %d\n", x);
}
