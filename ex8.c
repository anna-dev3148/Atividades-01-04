#include <stdio.h>
int testa_par(int nr_a_testar){
    if(nr_a_testar % 2 == 0) {
        printf("%d é par? %d", nr_a_testar, (nr_a_testar % 2 == 0));
    } else {
        printf("%d é ímpar? %d", nr_a_testar, (nr_a_testar % 2 == 0));
    }
    
    return 0;
}

int main(void) {
    int num = 0;
    
    printf("Digite um número interiro:");
    scanf("%d", &num);
    
    testa_par(num);

  return 0;
}
