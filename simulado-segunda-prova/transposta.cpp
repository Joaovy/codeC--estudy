#include <bits/stdc++.h>

using namespace std;

int main(){

    int linhas, colunas;
    cin >> linhas >> colunas;

    int matriz[linhas][colunas];
    int matrizTransposta[colunas][linhas]; // invertendo as posições

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cin >> matriz[i][j];
        }
    }


    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matrizTransposta[j][i] = matriz[i][j];
        }
    }

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){
            if(j > 0) cout << " ";
            cout << matrizTransposta[i][j];
        }
        cout << endl;
    }


    return 0;
}