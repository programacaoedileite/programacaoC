#include <stdio.h>
 
 // Desafio Super Trunfo - Países
 // Tema 1 - Cadastro das Cartas
 // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
 // Siga os comentários para implementar cada parte do desafio.
 //Teste larissa
 #include <string.h>  // Para manipulação de strings
 
 int main() {
     // Sugestão: Defina variáveis separadas para cada atributo da cidade.
     // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
     // Definindo as variáveis para a primeira Carta.
     int turisticos1;
     int populacao1;
     float area1, pib1;
     char estado1;  // Variável para armazenar o estado (um único caractere)
     char codigo1[3];  // Variável para armazenar o código (2 caracteres + '\0')
     char cidade1[50];  // Nome da cidade
     float densidade1; 
     float PibperCapita1;
     //char codigoCompleto[6];  // Para armazenar a concatenação do estado e código (1 caractere + 2 caracteres + '\0')
     
     //Definindo as variáveis para a segunda Carta.
     int populacao2, turisticos2;
     float area2, pib2;
     char estado2;  // Variável para armazenar o estado (um único caractere)
     char codigo2[4];  // Variável para armazenar o código (2 caracteres + '\0')
     char cidade2[50];  // Nome da cidade
     float densidade2;
     float PibperCapita2;
     //char codigoCompleto2[6];  // Para armazenar a concatenação do estado e código (1 caractere + 2 caracteres + '\0')
 
     // Cadastro da Carta 1:
     printf("Carta 1:\n");
     printf("Estado: Digite uma letra de 'A' a 'H':\n");
     scanf(" %c", &estado1);  // O espaço antes de %c é para consumir qualquer caractere de nova linha (\n) que possa ter sido deixado na entrada anterior.
 
     printf("Código: Digite a letra do Estado seguida de um número de '01' a '04' (ex: A01, B03):\n");
     scanf("%s", &codigo1);  // Lê o código da cidade (2 caracteres).
 
     printf("Digite o nome da cidade:\n");
     scanf("%s", &cidade1);  // Lê o nome da cidade (sem espaços).
 
     printf("Digite o número de habitantes:\n");
     scanf("%d", &populacao1); // Lê o numero de habitantes.
 
     printf("Digite a área da cidade em km²:\n");
     scanf("%f", &area1); // Lê a área da cidade.
 
     printf("Digite o PIB da cidade:\n");
     scanf("%f", &pib1); // Lê o PIB da cidade.
 
     printf("Digite a quantidade de pontos turísticos:\n");
     scanf("%d", &turisticos1); // Lê a quantidade de pontos turísticos.
 
     densidade1 = populacao1 / area1;
     PibperCapita1 = pib1 / populacao1;
     // Concatenando o estado e código
     //snprintf(codigoCompleto, sizeof(codigoCompleto), "%c%s", estado1, codigo1);  // Usando snprintf para concatenar
 
 
     // Cadastro das Cartas:
     // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
     // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
     // Exibição dos Dados da primeira Carta:
     printf("\nCarta 1:\n");
 
     // Exibição dos Dados das Cartas:
     // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
     // Exiba os valores inseridos para cada atributo da cidade, um por linha.
      // Exibindo o estado completo (por extenso) com a letra do estado
     printf("Estado: %c\n", estado1);  // Exibindo apenas o estado
     // Exibindo o estado + código concatenados
     printf("Código: %s\n", codigo1);  // Exibindo o estado e o código concatenados
     // Exibindo o nome da cidade
     printf("Cidade: %s\n", cidade1);  // Exibindo o nome da cidade
 
     // Exibindo os outros dados
     printf("População: %d\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Pontos turísticos: %d\n", turisticos1);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
     printf("PIB per Capita: %.2f reais\n\n", PibperCapita1);
 
     //Cadastro da Carta 2.
     printf("Carta 2:\n");
     printf("Estado: Digite uma letra de 'A' a 'H':\n");
     scanf(" %c", &estado2);  // O espaço antes de %c é para consumir qualquer caractere de nova linha (\n) que possa ter sido deixado na entrada anterior.
 
     printf("Código: Digite a letra do Estado seguida de um número de '01' a '04' (ex: A01, B03):\n");
     scanf("%s", &codigo2);  // Lê o código da cidade (2 caracteres)
 
     printf("Digite o nome da cidade:\n");
     scanf("%s", &cidade2);  // Lê o nome da cidade (sem espaços)
 
     printf("Digite o número de habitantes:\n");
     scanf("%d", &populacao2);
 
     printf("Digite a área da cidade em km²:\n");
     scanf("%f", &area2);
 
     printf("Digite o PIB da cidade:\n");
     scanf("%f", &pib2);
 
     printf("Digite a quantidade de pontos turísticos:\n");
     scanf("%d", &turisticos2);

     densidade2 = populacao2 / area2;
     PibperCapita2 = pib2 / populacao2;
     // Concatenando o estado e código
     //snprintf(codigoCompleto2, sizeof(codigoCompleto2), "%c%s", estado2, codigo2);  // Usando snprintf para concatenar
     
     // Exibição dos Dados da Carta 2:
     printf("\nCarta 2:\n");
     
      // Exibindo o estado completo (por extenso) com a letra do estado
     printf("Estado: %c\n", estado2);  // Exibindo apenas o estado
     // Exibindo o estado + código concatenados
     printf("Código: %s\n", codigo2);  // Exibindo o estado e o código concatenados
     // Exibindo o nome da cidade
     printf("Cidade: %s\n", cidade2);  // Exibindo o nome da cidade
 
     // Exibindo os outros dados
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Pontos turísticos: %d\n", turisticos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
     printf("PIB per Capita: %.2f reais\n", PibperCapita2);
 
     return 0;
 }