#include <stdio.h>

int main(){

  int menor, linhas, colunas, tamanho, matriz[30][30], matrizSaida[30][30], contador[30][30], valores[101], lista[101], frequencia[101], listaFrequencia[101], quantidade = 0, contMenor, contMaior;

  scanf("%d%d", &linhas, &colunas);

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      scanf("%d", &matriz[i][j]);
      matrizSaida[i][j] = matriz[i][j];
    }
  }

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      contador[i][j] = 1;
      for(int y = i; y < linhas; y++){
        if(y == i){
          for(int z = j + 1; z < colunas; z++){
            if(matriz[i][j] == matrizSaida[y][z]){
              contador[i][j]++;
              matrizSaida[y][z] = -1;
            }
          }
        } else{
          for(int z = 0; z < colunas; z++){
            if(matriz[i][j] == matrizSaida[y][z]){
              contador[i][j]++;
              matrizSaida[y][z] = -1;
            }
          }
        }
      }
    }
  }

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      if(matrizSaida[i][j] > -1){
        valores[quantidade] = matrizSaida[i][j];
        frequencia[quantidade] = contador[i][j];
        quantidade ++;
      }
    }
  }

  contMenor = 0;
  contMaior = quantidade - 1;
  menor = 101;

  for(int i = 0; i < quantidade; i++){
    for(int j = 0; j < quantidade; j++){
      if(valores[j] < menor){
        tamanho = 0;
        menor = valores[j];
        //lista[contMenor] = valores[i];
        //listaFrequencia[contMenor] = frequencia[i];
        //contMenor++;
      }
    }
    if(tamanho == 0){
      printf("%d eh o menor", valores[i]);
    }
  }

  for(int i = 0; i < quantidade; i++){
    printf("%d %d\n", lista[i], listaFrequencia[i]);
  }

  return 0;
}