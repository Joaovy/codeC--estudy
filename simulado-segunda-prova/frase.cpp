#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string frase;
    int contador = 0;
    getline(cin, frase);

    for(int i = 0; i < frase.size(); i++){

        if(isdigit(frase[i])){
            contador++;
        }

    }

    cout << contador << endl;
    

    return 0;
}