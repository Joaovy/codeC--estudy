
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

struct Bike{

    string cor;
    string fabricante;
    int qMarcha;
    double preco;

};



int main(){

    int qBikes, qMenorMarcha, qMaiorMacha;
    cin >> qBikes >> qMenorMarcha >> qMaiorMacha;

    vector<Bike> bicicletas(qBikes);


    for(int i = 0; i < bicicletas.size(); i++){
        cin.ignore();

        getline(cin, bicicletas[i].cor);
        getline(cin, bicicletas[i].fabricante);

            cin >> bicicletas[i].qMarcha;
            cin >> bicicletas[i].preco;

    }

    for(int i = 0; i < bicicletas.size(); i++){

        if(bicicletas[i].qMarcha >= qMenorMarcha && bicicletas[i].qMarcha <= qMaiorMacha){
            cout << bicicletas[i].cor << endl;
            cout << bicicletas[i].fabricante << endl;
            cout << bicicletas[i].qMarcha << endl;
            cout << fixed << setprecision(2);
            cout << bicicletas[i].preco << endl;

        }

    }


    


    return 0;
}