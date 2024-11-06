#include <stdio.h>
    //declaração das variáveis
    int populacao, num_pontoturisticos;
    float area, pib;
    char estado;
    char nome_da_cidade[50], codigo_carta[2];
    float densidadePopulacional, pibPerCapita;
  

    //leitura dos dados
    void entradaDados(){
    printf("Insira o Estado de A - H: \n");
    scanf(" %c", &estado);  
    printf("Estado: %c\n", estado);
    printf("Cadastrado com Sucesso!\n");

    printf("Insira o codigo da carta: \n");
    scanf("%s", codigo_carta);
    printf("Codigo da Carta: %s\n", codigo_carta);
    printf("Cadastrado com Sucesso!\n");

    printf("Insere o Nome da Cidade: \n");
    scanf("%s", nome_da_cidade);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Cadastrado com Sucesso!\n");

    printf("Insere o numero da Populacao: \n"); 
    scanf("%d", &populacao);
    printf("Populacao: %d\n", populacao);
    printf("Cadastrado com Sucesso!\n");

    printf("Insere a area da populacao: \n");
    scanf("%f", &area);
    printf("Area: %.2f\n", area);
    printf("Cadastrado com Sucesso!\n");

    printf("Insere o PIB: \n");
    scanf("%f", &pib);
    printf("PIB: %.2f\n", pib);
    printf("Cadastrado com Sucesso!\n");

    printf("Insere o Numero de Pontos Turisticos: \n");
    scanf("%d", &num_pontoturisticos);
    printf("Numero de Pontos Turisticos: %d\n", num_pontoturisticos);
    printf("Cadastrado com Sucesso!\n\n");

    densidadePopulacional = populacao/area;
    pibPerCapita = pib/populacao; 
    }

   
   //impressão dos dados
   void exibirDados(){
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", num_pontoturisticos);
    printf("Densidade Populacional: %.3f\n", densidadePopulacional);
    printf("Pib per Capita: %.5f\n", pibPerCapita);
    }

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    entradaDados();
    printf("------------------\n");
    exibirDados();

return 0;
}
