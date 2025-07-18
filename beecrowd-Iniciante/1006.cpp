#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main (){

    double notaA, notaB, notaC, media;

    cin >> notaA;
    cin >> notaB;
    cin >> notaC;

    media = (notaA * 2 + notaB * 3 + notaC * 5 ) / 10.0;
    cout << "MEDIA = " << fixed << setprecision(1) << media  << endl;

    

    return 0;
}