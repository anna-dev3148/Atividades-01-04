#include <stdio.h>

int main(void) {
    for(int a = 0; a < 2; a++) {
        for(int b = 0; b < 2; b++) {
            printf("\nA: %d ", a);
            printf("\nB: %d\n ", b);
            printf("\nA e B: %d && %d = %d", a, b,a && b);
        }
    }
  return 0;
}
