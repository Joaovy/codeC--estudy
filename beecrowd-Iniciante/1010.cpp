#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){

    int codePeca1, quantidadePeca1, codePeca2, quantidadePeca2;
    float valorPeca1, valorPeca2;

    cin >> codePeca1 >> quantidadePeca1 >> valorPeca1;
    cin >> codePeca2 >> quantidadePeca2 >> valorPeca2;


    float resultadoTotal = (quantidadePeca2 * valorPeca2) + (quantidadePeca1 * valorPeca1);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << resultadoTotal << endl;


    return 0;
}