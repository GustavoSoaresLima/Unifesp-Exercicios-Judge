#include <stdio.h>

int main(){

  int menor, linhas, colunas, matriz[30][30], matrizSaida[30][30], contador[30][30], valores[101], lista[102], frequencia[101], listaFrequencia[101], quantidade = 0;

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

  lista[-1] = -1;

  for(int i = 0; i < quantidade; i++){
    menor = 101;
    for(int j = 0; j < quantidade; j++){
      if(valores[j] < menor && valores[j] > lista[i-1]){
        menor = valores[j];
        listaFrequencia[i] = frequencia[j];
      }
    }
    lista[i] = menor;
  }

  for(int i = 0; i < quantidade; i++){
    printf("%d %d\n", lista[i], listaFrequencia[i]);
  }

  return 0;
}