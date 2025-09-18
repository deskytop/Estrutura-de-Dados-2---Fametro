#include <stdio.h>
#include <locale.h>
#include <string.h>

void inverterString(char *str) {
    char *inicio = str;                  // ponteiro para o começo
    char *fim = str + strlen(str) - 1;   // ponteiro para o final (antes do '\0')

    while (inicio < fim) {
        char temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

void main() {
    char texto[100];
    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma palavra: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove o '\n' do fgets, se existir
    size_t len = strlen(texto);
    if (len > 0 && texto[len - 1] == '\n') {
        texto[len - 1] = '\0';
    }

    inverterString(texto);
    printf("String invertida: %s\n", texto);
}