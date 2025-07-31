#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){

    float valorRealAtual, valorPacoteFigurinha;
    cin >> valorRealAtual >> valorPacoteFigurinha;

    int quantidadeFigurinha = valorRealAtual / valorPacoteFigurinha;
    float restoTroco = fmod(valorRealAtual, valorPacoteFigurinha);

    cout << quantidadeFigurinha << " " << fixed << setprecision(2) << restoTroco << endl;

    return 0;
}