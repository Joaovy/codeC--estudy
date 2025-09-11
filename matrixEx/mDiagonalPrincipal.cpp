#include <bits/stdc++.h>

using namespace std;

int main(){

    long long int n;
    long long int soma = 0;

    cin >> n;
    long long int matriz[n][n];

    for(int i = 0; i < n; i++ ){
        for(int j = 0; j < n; j++ ){
            cin >> matriz[i][j];
        }

    }


    for(int i = 0; i < n; i++){
            long long int elemento = matriz[i][n - 1 - i];
            if(elemento % 2 != 0){
                soma += elemento;
            }
        
    }

    cout << soma << endl;



    return 0;
}