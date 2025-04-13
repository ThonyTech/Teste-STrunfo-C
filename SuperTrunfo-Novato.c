#include <stdio.h>

/*Inicio do código*/

int main(){


/*Variaveis usadas no game*/

    char estado;
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turistico;

    char estado_2;
    char codigo_2[20];
    char cidade_2[20];
    int populacao_2;
    float area_2;
    float pib_2;
    int turistico_2;

/*Coleta de dados por parte do usuario*/    

    printf("Carta 1\n");//valores da carta 1
    printf("Qual estado? ");
    scanf("%c", &estado);
    printf("Qual codigo? ");
    scanf("%s", &codigo);
    printf("Qual cidade? ");
    scanf("%s", &cidade);
    printf("Qual a população? ");
    scanf("%d", &populacao);
    printf("Qual a area? ");
    scanf("%f", &area);
    printf("Quanto é o PIB? ");
    scanf("%f", &pib);
    printf("Quantos pontos turisticos? ");
    scanf("%d", &turistico);


    printf("Carta 2\n");//valores da carta 2
    printf("Qual estado? ");
    scanf(" %c", &estado_2);
    printf("Qual codigo? ");
    scanf("%s", &codigo_2);
    printf("Qual cidade? ");
    scanf("%s", &cidade_2);
    printf("Qual a população? ");
    scanf("%d", &populacao_2);
    printf("Qual a area? ");
    scanf("%f", &area_2);
    printf("Quanto é o PIB? ");
    scanf("%f", &pib_2);
    printf("Quantos pontos turisticos? ");
    scanf("%d", &turistico_2);

/*Dados a ser impressos no console*/

    printf("Carta 1\n");// dados da carta 1
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %4.2f km²\n", area);
    printf("PIB: %3.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", turistico);

    printf("Carta 2\n");// dados da carta 2
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %4.2f km²\n", area_2);
    printf("PIB: %3.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d", turistico_2);

}