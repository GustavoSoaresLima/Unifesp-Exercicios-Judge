/*Implementar um algoritmo em Linguagem C que calcule a média
(número real - float) de todos os números pares e múltiplos de 7
contidos num intervalo fornecido [a,b].*/

#include <stdio.h>

int main(){

  float a, b, soma = 0, contador = 0, media = 0;

  scanf("%f", &a);
  scanf("%f", &b);

    for(a; a <= b; a++){
      if((int)a%2 == 0 && (int)a%7 == 0){
        soma += a;
        contador++;
      }
    }

    if(contador == 0){
      contador++;
    }

    media = soma / (float)contador;
    printf("%f", media);

  return 0;
}