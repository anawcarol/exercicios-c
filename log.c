#include <stdio.h>

int lg(int N) {
   int i, n;
   i = 0;
   n = 1;
   while (n <= N/2) {
      n = 2 * n;
      i += 1;
   }
   return i;    
}

int main() {
   int N = 1000; // Exemplo de valor para N
   int result = lg(N); // Chamando a função lg
   printf("O logaritmo na base 2 de %d é %d", N, result);
   return 0;
}




