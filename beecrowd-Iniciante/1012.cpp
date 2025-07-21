#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){

    double valorA, valorB, valorC;

    cin >> valorA >> valorB >> valorC;

    double resultadoTriangulo = (valorA + valorB + valorC) / 2;

    cout << "TRIANGULO: " << fixed << setprecision(3) << resultadoTriangulo << endl; 

    return 0;
}