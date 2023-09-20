#include <stdio.h>
#include <math.h>

int lg (int N) {  
   double x;
   x = log10 (N) / log10 (2);
   return floor (x); 
}

int main(){
   int N = 30;
   int result = lg(N);
   printf("O logaritmo de %d na base 10 dividido pelo log de 2 também na base 2 é %d \n", N, result);
}