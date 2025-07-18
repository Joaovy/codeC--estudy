#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){

    int numeroFuncionario, quantidadeHoras;
    float salarioPhora;

    cin >> numeroFuncionario;
    cin >> quantidadeHoras;
    cin >> salarioPhora;

    float salario = quantidadeHoras * salarioPhora;

    cout << "NUMBER = " << numeroFuncionario << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario << endl;


    return 0;
}