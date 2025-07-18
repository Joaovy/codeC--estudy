#include <bits/stdc++.h>
#include <string>
#include <math.h>

using namespace std;

int main(){

    double n = 3.14159;
    double raio;

    cin >> raio;
    double area = n * pow(raio, 2.0);

    cout << "A=" << fixed << setprecision(4) << area << endl;


    return 0;
}
