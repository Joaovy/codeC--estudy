#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){

    double notaA, notaB;
    cin >> notaA;
    cin >> notaB;

    double media = (notaA * 3.5 + notaB * 7.5) / 11.0;
    cout << "MEDIA = " << fixed << setprecision(5) << media << endl;


    return 0;
}