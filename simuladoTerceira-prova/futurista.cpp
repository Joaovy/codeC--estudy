
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

int main(){

    int num = 0;
    cin >> num;
    cin.ignore();


    string frase;
    getline(cin, frase);


    for(int i = 0; i < num; i++){

        cout << frase << endl;

    }


    return 0;
}