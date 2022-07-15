#include <stdio.h>
#define TAM_MAX 30

int multiplicarMatrizes(int matrizA[TAM_MAX][TAM_MAX], int matrizB[TAM_MAX][TAM_MAX], int linhasA, int colunasA, int linhasB, int colunasB){
  int soma[TAM_MAX][TAM_MAX], somaFinal[TAM_MAX][TAM_MAX], printe = 0;

  for(int i = 0; i < linhasA; i++){
    for(int j = 0; j < colunasA; j++){
      scanf("%d", &matrizA[i][j]);
    }
  }

  for(int i = 0; i < linhasB; i++){
    for(int j = 0; j < colunasB; j++){
      scanf("%d", &matrizB[i][j]);
    }
  }

  if(colunasA != linhasB || linhasA > TAM_MAX || linhasB > TAM_MAX || colunasB > TAM_MAX){
    printf("ERRO");
    return 0;
  }

  for(int s = 0; s < linhasA; s++){
    for(int i = 0; i < colunasB; i++){
      soma[i][s] = 0;
      for(int j = 0; j < linhasB; j++){
        printe += matrizA[s][j] * matrizB[j][i];
      }
      soma[i][s] = printe;
      printe = 0;
    }
  }

  for(int s = 0; s < linhasA; s++){
    for(int i = 0; i < colunasB; i++){
      somaFinal[i][s] = 0;
      for(int j = 0; j < linhasA; j++){
        printe += matrizA[s][j] * soma[i][s];
      }
      somaFinal[i][s] = printe;
      printe = 0;
    }
  }

  for(int i = 0; i < linhasA; i++){
    for(int j = 0; j < colunasB; j++){
      printf("%d ", somaFinal[j][i]);
    }
    printf("\n");
  }
}

int main(){

  int linhas1, colunas1, linhas2, colunas2, matriz1[TAM_MAX][TAM_MAX], matriz2[TAM_MAX][TAM_MAX];
  scanf("%d%d", &linhas1, &colunas1);
  scanf("%d%d", &linhas2, &colunas2);

  multiplicarMatrizes(matriz1, matriz2, linhas1, colunas1, linhas2, colunas2);

  return 0;
}