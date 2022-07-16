#include <stdio.h>
#define TAM_MAX 30

void multiplicarMatrizes(int matrizA[TAM_MAX][TAM_MAX], int matrizB[TAM_MAX][TAM_MAX], int linhasA, int colunasA, int linhasB, int colunasB){
  int soma[TAM_MAX][TAM_MAX], somaFinal[TAM_MAX][TAM_MAX], printe = 0;

  if(colunasA != linhasB || linhasA > TAM_MAX || linhasB > TAM_MAX || colunasB > TAM_MAX){
    printf("ERRO");
  } else {
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
        printf("%d ", soma[j][i]);
      }
      printf("\n");
    }
  }
}

int main(){

  int linhas1, colunas1, linhas2, colunas2, matriz1[TAM_MAX][TAM_MAX], matriz2[TAM_MAX][TAM_MAX];
  scanf("%d%d", &linhas1, &colunas1);
  scanf("%d%d", &linhas2, &colunas2);

  multiplicarMatrizes(matriz1, matriz2, linhas1, colunas1, linhas2, colunas2);

  return 0;
}

//test
/*
3 3
3 9
6 1 6
9 0 4
8 2 7
10 0 1 6 8 9 2 2 9
6 0 3 6 10 10 2 2 2
8 0 9 2 0 1 2 5 10
=
114	0	63	54	58	70	26	44	116
122	0	45	62	72	85	26	38	121
148	0	77	74	84	99	34	55	146
=

1694	0	 885	 830	 924	1099	386	632	1693
1618	0	 875	 782	 858	1026	370	616	1628
2192	0	1133	1074	1196	1423	498	813	2192

*/
