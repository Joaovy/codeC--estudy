
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

int main(){

    string frase;
    
    while(getline(cin, frase)){


        string fraseLimpa;
        for(char c : frase){
            if (isalpha(c)){
                fraseLimpa += tolower(c);
            }
        }


        string fraseInvertida = fraseLimpa;
        reverse(fraseInvertida.begin(), fraseInvertida.end());

        if(fraseLimpa == fraseInvertida){
            cout << "sim" << endl;
        } else {
            cout << "nao" << endl; 
        }


    }



    return 0;
}