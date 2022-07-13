#include <stdio.h>

int main(){

  int linhas1, colunas1, linhas2, colunas2, matriz1[30][30], matriz2[30][30], soma[30][30], printe;
  scanf("%d%d", &linhas1, &colunas1);
  scanf("%d%d", &linhas2, &colunas2);

  if(colunas1 != linhas2 || linhas1 > 30 || linhas2 > 30 || colunas2 > 30){
    printf("ERRO");
    return 0;
  }

  for(int i = 0; i < linhas1; i++){
    for(int j = 0; j < colunas1; j++){
      scanf("%d", &matriz1[i][j]);
    }
  }

  for(int i = 0; i < linhas2; i++){
    for(int j = 0; j < colunas2; j++){
      scanf("%d", &matriz2[i][j]);
    }
  }

  for(int s = 0; s < linhas1; s++){
    for(int i = 0; i < colunas2; i++){
      soma[i][s] = 0;
      for(int j = 0; j < linhas2; j++){
        //soma[i][s] += (matriz1[s][j] * matriz2[j][i]); Não funciona assim, ainda não entendi o motivo...
        printe += matriz1[s][j] * matriz2[j][i];
        //printf("%d - ", printe);
      }
      //printf(" | ");
      //printe = 0;
      soma[i][s] = printe;
      printe = 0;
    }
    //printf("\n");
  }

  for(int i = 0; i < linhas1; i++){
    for(int j = 0; j < colunas2; j++){
      printf("%d ", soma[j][i]);
    }
    printf("\n");
  }

  return 0;
}