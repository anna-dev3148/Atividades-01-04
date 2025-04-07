#include <stdio.h>

int main(void) {
    int nr1 = 0;
    int nr2 = 0;
    int nr3 = 0;
    int nr4 = 0;
    int continua = 1;
    
    while (continua == 1){
        printf("Digite o nr 1,.:");
        scanf("%d",&nr1);
        
        if ( nr1<0 || nr1>10 ){
            puts("O número precisa estar entre 0 e 10");
            //return 0;
            continue;
        }
        
        printf("Digite o nr 2,.:");
        scanf("%d",&nr2);
        
        if ( nr2<0 || nr2>10 ){
            puts("O número precisa estar entre 0 e 10");
            //return 0;
            continue;
        }
    
        printf("Digite o nr 3,.:");
        scanf("%d",&nr3);
        
        if ( nr3<0 || nr3>10 ){
            puts("O número precisa estar entre 0 e 10");
            //return 0;
            continue;
        }
        
        printf("Digite o nr 4,.:");
        scanf("%d",&nr4);
    
        if ( nr4<0 || nr4>10 ){
            puts("O número precisa estar entre 0 e 10");
            //return 0;
            continue;
        }
        
        continua = 0;
    }
    
    printf("\n%d %d %d %d\n", nr1, nr2, nr3 , nr4);
    
/*
    if ( (nr1<0 || nr1>10) ||
         (nr2<0 || nr2>10) ||
         (nr3<0 || nr3>10) ||
         (nr4<0 || nr4>10) ){
             
        puts("Os números precisam estar entre 0 e 10");
        return 0;
    }
*/
    
    printf("\n");
    for ( int x = 1; x <= nr1; x++ ){
        printf("*");
    }

    printf("\n");
    for ( int x = 1; x <= nr2; x++ ){
        printf("*");
    }
    
    printf("\n");
    for ( int x = 1; x <= nr3; x++ ){
        printf("*");
    }
    
    printf("\n");
    for ( int x = 1; x <= nr4; x++ ){
        printf("*");
    }
}
