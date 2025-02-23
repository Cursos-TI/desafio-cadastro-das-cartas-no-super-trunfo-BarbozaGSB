#include<stdio.h> 
int main() { 
    
printf("DESAFIO SUPER TRUNFO NOVATO!\n");
   
   // O usuário escolherá entre duas cartas disponíveis; 

      char escolha[10];
      char A[] = "AMAZONAS", B[] = "BAHIA"; 
      
       
    // "A" para escolher o estado do AMAZONAS ou "B" para escolher BAHIA; 

        printf("Vamos começar o jogo?\n");
        printf("Escolha sua primeira carta.\n");
        printf("Digite: A para AMAZONAS ou B para BAHIA.\n");
        scanf("%9s", escolha);
        if (escolha == A) {
           printf("Você escolheu: %9s ", A);
        }
        if (escolha == B) {
           printf("Você escolheu: %9s ", B);
        } else {
           printf("Escolha inválida");
        }
        


return 0;
}