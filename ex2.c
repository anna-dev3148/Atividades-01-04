#include <stdio.h>

int main(void) {
  int dado;
  int soma = 0;
  printf("Jogo: É par? [Digite o número de 1 a 6]: ");
  scanf("%d", &dado);

  while( dado % 2 == 0 ) {
    printf("É par! [Continue]: ");
    soma = soma + dado;
    
    scanf("%d", &dado);
    if( dado % 2 != 0 ) {
      break;
    }
  }

  printf("Fim de jogo!\nO valor digitado é impar: %d", dado);
  printf("\nA soma dos valores digitados é: %d", soma);
  return 0;
}
