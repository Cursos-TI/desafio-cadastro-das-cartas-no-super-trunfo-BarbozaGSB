#include <stdio.h>
#include <string.h>

int main() {
    printf("DESAFIO SUPER TRUNFO NOVATO!\n");

    // O usuário escolherá entre duas cartas disponíveis;
    char escolha[10];  // Armazena a escolha do usuário
    char A[] = "AMAZONAS";  // Definição correta das strings
    char B[] = "BAHIA";

    // "A" para escolher o estado do AMAZONAS ou "B" para escolher BAHIA;
    printf("Vamos começar o jogo?\n");
    printf("Escolha sua primeira carta.\n");
    printf("Digite: A para AMAZONAS ou B para BAHIA.\n");
    
    scanf("%s", escolha); // %9s para evitar overflow

    if (strcmp(escolha, "A") == 0) {  
        printf("Você escolheu: %s\n", A);
    } else if (strcmp(escolha, "B") == 0) {  
        printf("Você escolheu: %s\n", B);
    } else {
        printf("Escolha inválida\n");
    }

    return 0;
}
