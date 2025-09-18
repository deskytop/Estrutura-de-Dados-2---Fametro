#include <stdio.h>
#include <locale.h>
#include <ctype.h>  // biblioteca para tolower() e isalpha()

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes){
    *vogais = 0;
    *consoantes = 0;

    while(*str != '\0'){
        char c = tolower((unsigned char)*str); // converte para minúsculo, facilita a comparação, utilizar unsigned char para evitar erros, a variável pode receber um valor negativo durante a conversÃ£o sem o unsigned char, com ele, garante valores de 0 a 255.
        if(isalpha((unsigned char)c)){ // verifica se é uma letra do alfabeto, ignora acentos, números...
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                (*vogais)++; // soma, se fosse vogais++, mudaria o endereço do ponteiro, não o número guardado
            } else {
                (*consoantes)++; 
            }
        }
        str++; // muda o caractere, altera a posição do ponteiro. se fosse (*str)++, mudaria o valor do caractere atual
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    char texto[100];
    int v, c;

    printf("Escreva um texto ou uma palavra:\n");
    fgets(texto, sizeof(texto), stdin);

    contarVogaisConsoantes(texto, &v, &c);
    printf("Vogais: %d\n", v);
    printf("Consoantes: %d\n", c);
}