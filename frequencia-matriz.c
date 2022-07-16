#include <stdio.h>

int main(){

  int linhas, colunas, matriz[30][30], valores[101];

  scanf("%d%d", &linhas, &colunas);

  for(int i = 0; i < 101; i++){
    valores[i] = 0;
  }

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      scanf("%d", &matriz[i][j]);
      valores[matriz[i][j]]++;
    }
  }

  for(int i = 0; i < 101; i++){
    if(valores[i]){
      printf("%d %d\n", i, valores[i]);
    }
  }

  return 0;
}
