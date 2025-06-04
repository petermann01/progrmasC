#include <stdio.h>
#include <stdlib.h>
#include <time.h> //para gerar numeros aleatorios

int main() {
  int escolhajogador, escolhacomputador;
  srand(time(0)); //para gerar funçoes aleatorias

  printf("-------JOKENPO--------\n");
  printf("ESCOLHA UMAS DAS OPÇAO USANDO NUMEROS\n");
  printf("1. pedra\n");
  printf("2. papel\n");
  printf("3. tesoura\n");
  scanf("%d", &escolhajogador);

  escolhacomputador = rand() % 3 + 1; //aqui declaramos as quantidas de jogadas randonizadas para o jogo

  switch (escolhajogador) //aqui iniciamos as codificar as escolhas do jogador
  {
    case 1:
    printf("jogador: pedra - ");
    break;
     case 2:
    printf("jogador: papel - ");
    break;
     case 3:
    printf("jogador: tesoura - ");
    break;
    default:
    printf("opção invalida");
    break;
  }

   switch (escolhacomputador)
  {
    case 1:
    printf("computador: pedra\n");
    break;
     case 2:
    printf("computador: papel\n");
    break;
     case 3:
    printf("computador: tesoura\n");
    break;
  }

    if (escolhacomputador == escolhajogador) //aqui começamos a o vencedor usando if else para declarar a opçao do vencedor e do perdedor usando o &&(é) ||(ou)
    {
        printf("EMPATE!!!\n");
    } else if ((escolhajogador == 1) && (escolhacomputador == 3) || 
               (escolhajogador == 2) && (escolhacomputador == 1) ||
               (escolhajogador == 3) && (escolhacomputador == 2))
    {
       printf("VOCE GANHOU!!!\n"); 
    }   else {
       printf("VOCE PERDEU!!!!!\n");
    }
  return 0;
 }
