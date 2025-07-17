#include <bits/stdc++.h>
#include <string>
#include <cmath>

using namespace std;

int main(){

    float valorDinheiro, valorPacote;

    cin >> valorDinheiro >> valorPacote;

    int valorResultado = valorDinheiro / valorPacote;
    float restoTroco = fmod(valorDinheiro, valorPacote);
    
    cout << fixed << setprecision(2);
    cout << valorResultado << " " << restoTroco << endl;



    return 0;
}