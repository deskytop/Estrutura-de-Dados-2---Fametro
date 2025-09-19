# 🗺️ [Lista de Exercício 1](./../assets/files/Lista_Exercicio_1_ED2.pdf) - Guia
[Voltar ao Início](./../README.md)
***
## 💻 Questões Práticas 
| Questão  | Resolução |
| --- | :---: |
| Prática 1 - Troca de Valores | [ 🟢 ](./questao_1.c) |
| Prática 2 - Maior e Menor | [ 🟢 ](./questao_2.c) |
| Prática 3 - Endereços de Memória | [ 🟢 ](./questao_3.c) |
| Prática 4 - Dobro do Valor | [ 🟢 ](./questao_4.c) |
| Prática 5 - Cópia de String | [ 🟢 ](./questao_5.c) |
| Prática 6 - Contagem de Vogais e Consoantes | [ 🟢 ](./questao_6.c) |
| Prática 7 - Inversão de String | [ 🟢 ](./questao_7.c) |
| Prática 8 - Calculadora Básica | [ 🟢 ](./questao_8.c) |

## 📄 Questões teóricas

### (Múltipla Escolha)  

    1. Qual das seguintes afirmações sobre ponteiros em C é VERDADEIRA?

    a) Um ponteiro armazena o valor de uma variável.  
    b) Um ponteiro armazena o endereço de memória de uma variável.  
    c) A declaração int *p; aloca memória para um inteiro.  
    d) O operador & é usado para acessar o valor apontado por um ponteiro.

_R= b) Um ponteiro armazena o endereço de memória de uma variável._

    2. O que o operador * (asterisco) faz quando usado na frente de uma variável do
    tipo ponteiro que já foi inicializada?  
    a) Declara um novo ponteiro.  
    b) Retorna o endereço de memória do ponteiro.  
    c) Realiza uma operação de multiplicação.  
    d) Acessa (dereferencia) o valor armazenado no endereço de memória para o qual
    o ponteiro aponta.

_R= d) Acessa (dereferencia) o valor armazenado no endereço de memória para o qual o ponteiro aponta._

    3. Para que serve a função malloc() da biblioteca <stdlib.h>?  
    a) Para liberar memória previamente alocada.  
    b) Para declarar uma variável do tipo ponteiro.  
    c) Para alocar um bloco de memória de um tamanho especificado em bytes e
    retornar um ponteiro para o início desse bloco.  
    d) Para copiar o conteúdo de um bloco de memória para outro.

_R= c) Para alocar um bloco de memória de um tamanho especificado em bytes e retornar um ponteiro para o início desse bloco._

    4. Considere a função void modifica(int *a, int b) que altera o valor da variável para
    a qual a aponta. Como seria a chamada correta desta função na main para
    modificar uma variável int num = 5;?

_R=_
```
#include <stdio.h>

void modifica(int *a, int b){} // Protótipo função

void main(){
    int num = 5;
    modifica(&num, num); // Chamada correta
}
```

***
[Voltar ao Início](./../README.md)