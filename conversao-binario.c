#include <stdio.h>

int main() {
  long int binario, decimal = 0, auxiliar, potencia = 0, elevado;

  scanf("%ld", &binario);

  for(binario; binario !=0;){
    elevado = 1;
    auxiliar = binario%10;
    binario /= 10;
    
    for (int i = 0; i < potencia; i++){
      elevado *= 2;
    }
    
    decimal += auxiliar * elevado;
    
    potencia++;
  }

  printf("%ld", decimal);

  return 0;
}