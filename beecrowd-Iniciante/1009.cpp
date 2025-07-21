#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){

    string nomeVendedor;
    double salarioFixo, totalVendas;

    getline(cin, nomeVendedor);

    cin >> salarioFixo;
    cin >> totalVendas;

    double totalSalario = salarioFixo + (totalVendas * 0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << totalSalario << endl;

    return 0;
}