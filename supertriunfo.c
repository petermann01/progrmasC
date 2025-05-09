#include <stdio.h>

int main() {
    //declarar as variaveis
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[30], cidade2[30];
    int  populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    //cadastro das cartas
    //numero 1
    printf("------SUPER TRIUNFO------\n");
    printf("carta AO1\n");

    printf("Digite uma letra que represente o estado de A-Z: \n");
    scanf(" %c", &estado1);

    printf("Digite qual será o codigo da carta de 1 ao 4: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);

     printf("Digite a área da cidade em  km²: \n");
     scanf(" %f", &area1);

     printf("Digite o PIB da cidade: \n");
     scanf(" %f", &pib1);

     printf("Digite quantos pontos turisticos tem na cidade: \n");
     scanf(" %d", &pontos1);


     //carta 2
      printf("------SUPER TRIUNFO------\n");
    printf("Carta AO2\n");

    printf("Digite uma letra que represente o estado de A-Z: \n");
    scanf(" %c", &estado2);

    printf("Digite qual será o codigo da carta de 1 ao 4: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);

     printf("Digite a área da cidade em  km²: \n");
     scanf(" %f", &area2);

     printf("Digite o PIB da cidade: \n");
     scanf(" %f", &pib2);

     printf("Digite quantos pontos turisticos tem na cidade: \n");
     scanf(" %d", &pontos2);


//exiber informacoes carta 1 e 2
printf("\n CARTA AO1\n");
printf("Estado %c\n", estado1);
printf("Codigo %s\n", codigo1);
printf("Cidade %s\n", cidade1);
printf("População %d\n", populacao1);
printf("Área %.3fkm²\n", area1);
printf("PIB R$%.2f\n", pib1);
printf("POntos turistico %d\n", pontos1);

printf("\n CARTA AO2\n");
printf("Estado %c\n", estado2);
printf("Codigo %s\n", codigo2);
printf("Cidade %s\n", cidade2);
printf("População %d\n", populacao2);
printf("Área %.3fkm²\n", area2);
printf("PIB R$%.2f\n", pib2);
printf("POntos turistico %d\n", pontos2);

return 0;
}
