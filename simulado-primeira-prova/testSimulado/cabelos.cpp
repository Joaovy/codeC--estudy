#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){


    float valorEtanol, valorGasolina;
    float valorporcetagemn = 73;

    cin >> valorEtanol;
    cin >> valorGasolina;

    float rGasolina = valorGasolina * ( valorporcetagemn / 100 );
    if(rGasolina < valorEtanol){
        cout << "GASOLINA" << endl;        
      
    } else {
        cout << "ETANOL" << endl;

    }



    return 0;
}