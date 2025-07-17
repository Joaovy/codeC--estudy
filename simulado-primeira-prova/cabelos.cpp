#include <bits/stdc++.h>

using namespace std;

int main(){

    float valorEtanol, valorGasolina; 
    float valorPorcentagem = 73;
    cin >> valorEtanol;
    cin >> valorGasolina;

    float rGasolina = valorGasolina * (valorPorcentagem / 100); 
    
    if(valorEtanol > rGasolina){
        cout << "GASOLINA" << endl;
    } else {
        cout << "ETANOL" << endl;

    }


    return 0;
}