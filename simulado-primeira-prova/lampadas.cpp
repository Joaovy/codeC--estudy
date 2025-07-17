#include <bits/stdc++.h>

using namespace std;


int main(){

    int ambienteQuadrado;
    cin >> ambienteQuadrado;

    int limites[9] = {10, 15, 20, 25, 30, 35, 40, 45, 50};
    int energia[9] = {40, 60, 79, 97, 114, 130, 145, 159, 172};

    for (int i = 0; i < 9;  i++){

        if (ambienteQuadrado < limites[i]){
            cout << energia[i] << endl;
            break;
        } 
       
    }

    return 0;
}