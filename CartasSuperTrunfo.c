#include <stdio.h>

int main() {
  //definindo duas variáveis para cada atributo,pois cada variável vai ser usado em uma carta.
  char estado1,estado2;
  char codigo_da_carta1[4];char codigo_da_carta2[4];
  char nome_da_cidade1[20];char nome_da_cidade2[20];
  int populacao1,populacao2;
  float area1,area2;
  float PIB1,PIB2;
  int numero_pontos_turisticos1,numero_pontos_turisticos2;


  printf("-----------------Primeira Carta-----------------------------\n");
  printf("digite o estado(A a H):\n");
  scanf(" %c", &estado1);

 printf("digite o código da carta(A letra do estado seguida de um número de 01 a 04):\n");
  scanf("%3s", &codigo_da_carta1);
  getchar(); // limpa o '\n'

 printf("digite o nome da cidade:\n");
  fgets(nome_da_cidade1, 20, stdin); 
  nome_da_cidade1[strcspn(nome_da_cidade1, "\n")] = '\0'; 

printf("digite a população da cidade:\n");
scanf("%d", &populacao1);

printf("digite a área da cidade(em km²):\n");
scanf("%f", &area1);

printf("digite o PIB da cidade:\n");
scanf("%f", &PIB1);

printf("digite o número de pontos turísticos:\n");
scanf("%d", &numero_pontos_turisticos1);


getchar();

  printf("-----------------segunda Carta-----------------------------\n");
  printf("digite o estado(A a H):\n");
scanf(" %c", &estado2);

 printf("digite o código da carta(A letra do estado seguida de um número de 01 a 04):\n");
scanf("%3s", &codigo_da_carta2);

getchar(); // limpa o '\n'

 printf("digite o nome da cidade:\n");
fgets(nome_da_cidade2, 20, stdin); 
nome_da_cidade2[strcspn(nome_da_cidade2, "\n")] = '\0';

printf("digite a população da cidade:\n");
scanf("%d", &populacao2);

printf("digite a área da cidade(em km²):\n");
scanf("%f", &area2);

printf("digite o PIB da cidade:\n");
scanf("%f", &PIB2);

printf("digite o número de pontos turísticos:\n");
scanf("%d", &numero_pontos_turisticos2);


printf("-----------------------------------------------\n");

printf("Carta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo_da_carta1);
printf("Nome da Cidade: %s\n", nome_da_cidade1);
printf("População: %d\n", populacao1);
printf("Área da cidade: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos1);

printf("-----------------------------------------------\n");
printf("Carta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo_da_carta2);
printf("Nome da Cidade: %s\n", nome_da_cidade2);
printf("População: %d\n", populacao2);
printf("Área da cidade: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", PIB1);
printf("Número de pontos turísticos: %d\n", numero_pontos_turisticos2);
  
  return 0;
}
