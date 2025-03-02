#include <stdio.h>
#include <string.h>

int main() {
    printf("------ BEM VINDO AO DESAFIO SUPER TRUNFO NÍVEL NOVATO! ------\n");

   // Inserir as variáveis. 

    char estadoA, estadoB; // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo01[3], codigo02[3]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char cidade01[20], cidade02[20]; // O nome da cidade. Tipo: char[] (string)
    int populacao01, populacao02; // O número de habitantes da cidade. Tipo: int
    float area01, area02; // A área da cidade em quilômetros quadrados. Tipo: float
    float PIB01, PIB02; // O Produto Interno Bruto da cidade. Tipo: float
    int pturisticos01, pturisticos02; // A quantidade de pontos turísticos na cidade. Tipo: int

    // Durante o cadastro de cartas
    // Solicitar ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("- Primeitramente, cadastre suas cartas: -\n");
    printf("--- CARTA 1 ---\n");
    printf("- Digite uma leta de 'A' a 'H', representando um dos 8 estados. \n");
    printf("- (Por exeplo, 'A' para AMAZONAS e 'B' para BAHIA): - \n");
    scanf(" %c", &estadoA); // Armazena a variável letra correspondente ao estado
    printf("- Agora, digite o código da carta: "); 
    printf("- Ele será uma combinação da Letra do estado + código da cidade - \n");
    printf("- (Por exeplo, 'A01, A02, B01, B02'): - \n");
    scanf("%s", codigo01); // Armazena o código da carta
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade01); // Armazena o nome da cidade
    printf("Digite a população: ");
    scanf("%d", &populacao01); // Armazena a população
    printf("Digite a área (km²): ");
    scanf("%f", &area01); //Armazena a área
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB01); //Armazena o PIB
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pturisticos01);//Armazena o número de pontos turísticos
    printf("\n");

    printf("--CARTA 2--\n");
    printf("- Digite uma leta de 'A' a 'H', representando um dos 8 estados. \n");
    printf("- (Por exeplo, 'A' para AMAZONAS e 'B' para BAHIA): - \n");
    scanf(" %c", &estadoB);
    printf("- Agora, digite o código da carta: "); 
    printf("- Ele será uma combinação da Letra do estado + código da cidade - \n");
    printf("- (Por exeplo, 'A01, A02, B01, B02'): - \n");
    scanf("%s", codigo02);
    printf("Digite o nome da cidade: ");
    scanf(" \n%[^\n]", cidade02);
    printf("Digite a população: ");
    scanf("%d", &populacao02);
    printf("Digite a área (km²): ");
    scanf("%f", &area02);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB02);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pturisticos02);
    printf("\n");


    // Exibição dos Dados das Cartas:
    
    printf(" *** PARABÉNS! SUAS CARTAS FICARAM ASSIM: ***\n");
   
    printf(" - CARTA 1 -\n");
    printf("Estado: %c\n", estadoA); //Exibe a letra que corresponde ao estado
    printf("Código: %s\n", codigo01);// Exibe o código da carta
    printf("Nome da cidade: %s\n", cidade01); //Exibe o nome da cidade
    printf("População: %d habitantes\n", populacao01); //Exie a número total da população
    printf("Área: %.2f km²\n", area01); // Exibe a área
    printf("PIB: R$ %.2f\n", PIB01); //Exibe o PIB
    printf("Número de pontos turísticos: %d\n", pturisticos01); //Exibe o número de pontos turísticos
    printf("\n");

    printf("- CARTA 2 -\n");
    printf("Estado: %c\n", estadoB);
    printf("Código: %s\n", codigo02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %d habitantes\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: R$ %.2f\n", PIB02);
    printf("Número de pontos turísticos: %d\n", pturisticos02);
    printf("\n");

return 0; 
}