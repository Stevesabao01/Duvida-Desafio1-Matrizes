#include <stdio.h>
#include <string.h>

int main() {

    char nome[80];
    char endereco[100];
    int i, contador, j, lugar;

    // mensagem identificacao
    printf("\n\nContador de Vogais presente no nome\n\n");
    printf("\n\n-----------------------------------\n\n");
    printf("\n\nContador de Numeros presente no endereco\n\n");

    // capturar nome digitado
    printf("\nInforme seu nome:");
    fgets(nome, sizeof(nome), stdin); // captura do conjunto de caracteres informados
    nome[strcspn(nome, "\n") -1] = '\0';
    printf("\nInforme seu lugar:");
    fgets(endereco, sizeof(endereco), stdin); // captura do conjunto de numeros informados
    endereco[strcspn(endereco, "\n") -1] = '\0';

    i = 0;
    contador = 0;
    // estrutura de repeticao pra recorrer a string
    do {
        switch (nome[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                contador++;
                break;
            default:
                break;
        }
        i++;
    } while (nome[i]!= '\0');

    j = 0;
    lugar = 0;
    do {
        switch (endereco[j]) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
               lugar++;
            break;
               default:
            break;
        }
        j++;
     } while(endereco[j] != '\0');

    // impressao do nome e qtd de vogais
    printf("\nO seu nome %s contem percentual %d", nome, contador);
    printf("\nO seu lugar %s contem percentual %d", lugar, endereco);
}

/*Observacao e duvida sobre o Codigo,  usando o sizeof(nome) para especificar q qtd maxima do numero
de caracteres pra ler no Input pode ser perigoso, o que nao entendi eh Porque devo extrair 
1 numero do sizeof(nome) pra excluir o caractere nulo? Exemplo: fgets(nome, sizeof(nome) -1, stdin); 

Porque utilizo o FGETS  em vez de gets ou scanf ???
A funcao STRCSPN(), seria uma alternativa do scanf  ???
Poderia explicar pq mesmo eu colocando -1 depois do sizeof, o terminal fala q nao eh array, vetor nem ponteiro ???
Como posso declarar 'lugar' como vetor de int ???
 */