#include <stdio.h>

int main(void) {
  int x = 0;

  while( x < 20 ) {
    x++;      
    if( x % 3 == 0 ) {
      continue; // salta para a condição quando x == 3
    }
    printf("%d ", x);
  }
  
  return 0;
}