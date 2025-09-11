
#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

int main(){

    int t;
    cin >> t;
    cin.ignore();

    string resultados[50];

    for(int i = 1; i <= t; i++){

        string rProgramador, rJuiz;
            getline(cin, rProgramador);
            getline(cin, rJuiz);

         if (rProgramador == rJuiz) {
            resultados[i - 1] = "Caso " + to_string(i) + ": Yes";
        } else {
            string semEspacoProg = "", semEspacoJuiz = "";

            // tirar espaços
            for (int i = 0; i < (int)rProgramador.size(); i++) {
                if (rProgramador[i] != ' ') semEspacoProg += rProgramador[i];
            }
            for (int i = 0; i < (int)rJuiz.size(); i++) {
                if (rJuiz[i] != ' ') semEspacoJuiz += rJuiz[i];
            }

            if (semEspacoProg == semEspacoJuiz) {
                resultados[i - 1] = "Caso " + to_string(i) + ": Output Format Error";
            } else {
                resultados[i - 1] = "Caso " + to_string(i) + ": Wrong Answer";
            }
        }

    }

     for (int i = 0; i < t; i++) {
        cout << resultados[i] << endl;
    }

    return 0;
}