#include<stdio.h> 
int main() { 
    
printf("DESAFIO SUPER TRUNFO NOVATO!\n");
   
   // O usuário escolherá entre duas cartas disponíveis; 

      char cartaA[10] = "AMAZONAS"; 
      char B[10] = "BAHIA";
      char cod[3];
      char nome[20];
      int populacao;  
      int turismo;
      float area;
      float pib;
    
    // "A" para escolher o estado do AMAZONAS ou "B" para escolher BAHIA; 

        printf("Vamos começar o jogo?\n");
        printf("Escolha sua primeira carta.\n");
        printf("Digite A para escolher o estado do AMAZONAS ou B para escolher o estado da BAHIA\n");
        scanf("%s", cartaA);
        printf("Você escolheu a carta: %s\n", cartaA);
          



return 0;
}