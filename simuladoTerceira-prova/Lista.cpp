
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

struct Supermercado{
    double preco;
    string nome;
};

int main(){

    vector<Supermercado> mercados(4);

    for(int i = 0; i < 4; i++){

        cin >> mercados[i].preco;
        getline(cin, mercados[i].nome);

    }

    int menorIndice = 0;
    for(int i = 1; i < mercados.size(); i++){
        if(mercados[i].preco < mercados[menorIndice].preco){
            menorIndice = i;

        }
        
    }
    
    cout << fixed << setprecision(2);
    cout << mercados[menorIndice].preco << mercados[menorIndice].nome << endl;




    return 0;
}