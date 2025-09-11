
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string palavra;
    cin >> palavra;

    bool ehPalindromo = true;
    int n = palavra.size();


    for(int i = 0; i < n / 2; i++){

        if(palavra[i] != palavra[n - 1 - i]){
            ehPalindromo = false;
            break;
        }
    }

    if(ehPalindromo){
        cout << "sim" << endl; 
    } else{
        cout << "nao" << endl;
    }


    return 0;
}