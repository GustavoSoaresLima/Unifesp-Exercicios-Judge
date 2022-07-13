#include <stdio.h>

int main(){

  int linhas, colunas, matriz[30][30], matrizOp[30][30];
  scanf("%d%d", &linhas, &colunas);

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      do{
        scanf("%d", &matriz[i][j]);
      }while(matriz[i][j] < 0 || matriz[i][j] > 100);
    }
  }

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      matrizOp[j][i] = matriz[i][j];
    }
  }

  for(int i = 0; i < colunas; i++){
    for(int j = 0; j < linhas; j++){
      printf("%d ", matrizOp[i][j]);
    }
    printf("\n");
  }

  return 0;
}