#include <stdio.h>
#include <string.h>

int main() {
    printf("DESAFIO SUPER TRUNFO NOVATO!\n");

    // O usuário escolherá entre duas cartas disponíveis;
    char Estado[10];  // Armazena a escolha de "estado" do usuário;
    char A[] = "AMAZONAS"; 
    char B[] = "BAHIA";

    // "A" para escolher o estado do AMAZONAS ou "B" para escolher BAHIA;
    printf("Vamos começar o jogo?\n");
    printf("Escolha sua primeira carta.\n");
    printf("Digite A para AMAZONAS ou B para BAHIA:\n");
    
    scanf("%s", Estado); // "%9s" para evitar overflow (erro "stack smashing detected");

    if (strcmp(Estado, "A") == 0) {  
        printf("Você escolheu: %s\n", A);
    } else if (strcmp(Estado, "B") == 0) {  
        printf("Você escolheu: %s\n", B);
    } else {
        printf("Escolha inválida\n");
    }
     // Cartas de cidade. Letra do estado + numeração (ex. de 01 até 03);

     char Cidade[10]; // Armazena a escolha de "cidade" do usuário;
     char A01[] = "MANAUS";
     char A02[] = "HUMAITÁ";
     char B01[] = "SALVADOR"; 
     char B02[] = "JUAZEIRO";
     
     if (strcmp(Estado, "A") == 0) {
         printf("Agora escolha a cidade desejada. \n");
         printf("Digite A01 para MANAUS ou A02 para HUMAITÁ:\n");
         
        } else if (strcmp(Estado, "B") == 0) {  
            printf("Agora escolha a cidade desejada. \n");
            printf("Digite B01 para SALVADOR ou B02 para JUAZEIRO:\n");
        } else {
            printf("Escolha inválida\n");
        }
    scanf("%s", Cidade);

    if (strcmp(Cidade, "A01") == 0) {  
        printf("Você escolheu: %s\n", A01);
    } else if (strcmp(Cidade, "A02") == 0) {  
        printf("Você escolheu: %s\n", A02);
    } else if (strcmp(Cidade, "B01") == 0) {  
        printf("Você escolheu: %s\n", B01);
    } else if (strcmp(Cidade, "B02") == 0) {  
        printf("Você escolheu: %s\n", B02);
    } else {
        printf("Escolha inválida\n");
    }
     
    // Próxima etapa é solicitar ao usuário que insira os valores da carta escolhida;
    // POPULAÇÃO, ÁEREA, PIB, NÚMERO DE PONTOS TURÍSTICOS;
    
    return 0;
}
