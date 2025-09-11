
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string frase;
    char letraCheck;
    int contador = 0;

    cin >> letraCheck;
    cin.ignore();

    getline(cin, frase);

    for(int i = 0; i < frase.size(); i++){

        if(tolower(frase[i]) == tolower(letraCheck)){
            contador++;
        }

    }

    cout << contador << endl;

    return 0;
}