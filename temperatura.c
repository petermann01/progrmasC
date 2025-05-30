#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("entre com o estoque: \n");
    scanf("%u", &estoque);

    if( temperatura > 30){
        printf("temperatura esta alta \n");
    } else {
        printf("temperatura esta dentro dos parametros \n");
    }

    if(umidade > 50){
        printf("umidade elevada. \n");
    } else {
        printf("umidade esta dentro dos parametros \n");
    }

    if (estoque > estoqueMinimo){
        printf("estoque abaixo de minimo! \n");
    } else {
        printf("estoque normal! \n");
    }
    return 0;
}
