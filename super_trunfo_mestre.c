#include <stdio.h>

int main() {
    printf("------ BEM VINDO AO DESAFIO SUPER TRUNFO NÍVEL MESTRE! ------\n");

    // Inserir as variáveis. 
    
    char estadoA, estadoB; // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo01[4], codigo02[4];  // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char cidade01[20], cidade02[20]; // O nome da cidade. Tipo: char[] (string)
    int populacao01, populacao02; // O número de habitantes da cidade. Tipo: int
    float area01, area02; // A área da cidade em quilômetros quadrados. Tipo: float
    float PIB01, PIB02; // O Produto Interno Bruto da cidade. Tipo: float
    int pturisticos01, pturisticos02; // A quantidade de pontos turísticos na cidade. Tipo: int
    float denspop01, denspop02; // O número de habitantes por quilômetro quadrado. Tipo float >>> Matematicamente população / area.
    float pibpercapta01, pibpercapta02; // A riqueza média por pessoa na cidade. Tipo float  >>> PIB / população.


    // Durante o cadastro de cartas
    // Solicitar ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("- Primeiramente, cadastre suas cartas: -\n");
    printf("--- CARTA 1 ---\n");
    printf("- Digite uma letra de 'A' a 'H', representando um dos 8 estados. \n");
    printf("- (Por exemplo, 'A' para AMAZONAS e 'B' para BAHIA): - \n");
    scanf(" %c", &estadoA);  // Espaço antes de %c para consumir qualquer caractere residual no buffer
    printf("- Agora, digite o código da carta: "); 
    printf("- Ele será uma combinação da Letra do estado + código da cidade - \n");
    printf("- (Por exemplo, 'A01, A02, B01, B02'): - \n");
    scanf("%s", codigo01);  
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade01);  
    printf("Digite a população: ");
    scanf("%d", &populacao01); 
    printf("Digite a área em km²: ");
    scanf("%f", &area01); 
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB01); 
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pturisticos01);
    printf("\n");

    printf("--CARTA 2--\n");
    printf("- Digite uma letra de 'A' a 'H', representando um dos 8 estados. \n");
    printf("- (Por exemplo, 'A' para AMAZONAS e 'B' para BAHIA): - \n");
    scanf(" %c", &estadoB); 
    printf("- Agora, digite o código da carta: "); 
    printf("- Ele será uma combinação da Letra do estado + código da cidade - \n");
    printf("- (Por exemplo, 'A01, A02, B01, B02'): - \n");
    scanf("%s", codigo02);  
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade02); 
    printf("Digite a população: ");
    scanf("%d", &populacao02);
    printf("Digite a área (km²): ");
    scanf("%f", &area02);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB02);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pturisticos02);
    printf("\n");

   
    // Calculo da Densidade populacional e PIB per Capta.
                     // para CARTA 1
    denspop01 = (float)populacao01/area01;
    pibpercapta01 = PIB01/(float)populacao01;
                     // para CARTA 2 
    denspop02 = (float)populacao02/area02;
    pibpercapta02 = PIB02/(float)populacao02;


     // Exibição dos Dados das Cartas:
    printf(" *** PARABÉNS! SUAS CARTAS FICARAM ASSIM: ***\n");
   
    printf(" - CARTA 1 -\n");
    printf("Estado: %c\n", estadoA); 
    printf("Código: %s\n", codigo01); 
    printf("Nome da cidade: %s\n", cidade01); 
    printf("População: %d habitantes\n", populacao01); 
    printf("Área: %.2f km²\n", area01); 
    printf("PIB: R$ %.2f\n", PIB01); 
    printf("Número de pontos turísticos: %d\n", pturisticos01); 
    printf("Densidade populacional: %.2f hab/km²\n", denspop01); //hab/km²
    printf("PIB per Capita: R$ %.2f\n", pibpercapta01);            // reais
    printf("\n");

    printf("- CARTA 2 -\n");
    printf("Estado: %c\n", estadoB);
    printf("Código: %s\n", codigo02);
    printf("Nome da cidade: %s\n", cidade02);
    printf("População: %d habitantes\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: R$ %.2f\n", PIB02);
    printf("Número de pontos turísticos: %d\n", pturisticos02);
    printf("Densidade populacional: %.2f hab/km²\n", denspop02);
    printf("PIB per Capita: R$ %.2f\n", pibpercapta02);
    printf("\n"); 

    // adicionar o super poder , comparar as cartas usando apenas operadores relacionais;

    return 0;
}