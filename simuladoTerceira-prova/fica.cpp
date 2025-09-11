
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

int main(){

    int n; 
    string p;

    cin >> n;

    string resultado = "";
    
    for (char caractere : p){
        int valor = caractere - 'A';

        int novoValor = (valor - n + 26) % 26;

        char novoCaractere = novoValor + 'A';

        resultado += novoCaractere;

    }

    cout << resultado << endl;



    return 0;
}