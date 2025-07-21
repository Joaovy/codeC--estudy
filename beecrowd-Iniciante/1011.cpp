#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){

    double pi = 3.14159;
    double cubo = 3;
    double raio;

    cin >> raio;

    double volume = (4.0/3) * pi * pow(raio, cubo);

    cout << "VOLUME = "<< fixed << setprecision(3) << volume << endl;

    return 0;
}
