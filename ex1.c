#include <stdio.h>
int main (void) {
    int contador = 1;
    int fim = 3;
    int num_certo;
    
    
    
    do {
        
        printf("Jogo advinhe o número! [Digite o número]: ");
        scanf("%d", &num_certo);
        
        if (num_certo == 7) {
            printf("Você ganhou!");
            contador = 3;
       } else {
          
              if(contador == fim) {
                  printf("Fim de Jogo!"); 
              } else {
                   printf("Número errado. Tentativas restantes: [%d]\n" , fim - contador);
                  
              }
       }
        contador++;
        
        
    } while (contador <= fim);
    

    
    return 0;
}