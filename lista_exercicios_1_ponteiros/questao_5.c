#include <stdio.h>
#include <locale.h>

void copiarString(char *origem, char *destino){
    while(*origem != '\0'){ // condição para, enquanto *origem for diferente de \0, ele continua. | \0 -> Caractere nulo, toda string termina com \0.
        *destino = *origem;
        origem++;
        destino++;
    } 
    *destino = '\0'; // adiciona o caractere nulo ao final, como a cópia parou antes, precisa receber para evitar "erros".
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    char string1[100], string2[100];

    printf("Escreva uma string\n");
    fgets(string1, sizeof(string1), stdin); // fgets mais seguro, aceita espaços | sizeof(string1) -> define o tamanho diretamente ao declarado | standard input > fluxo de entrada, no caso, por padrão o que você digita no terminal.

    copiarString(string1, string2);

    printf("String original: %s", string1);
    printf("String copiada: %s", string2);
}