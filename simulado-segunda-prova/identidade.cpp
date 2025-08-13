#include <bits/stdc++.h>

using namespace std;

int main(){

    int m;
    cin >> m;

    int matriz[m][m];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            if(i == j){
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }

    }

   for (int i = 0; i < m; i++) {
       for (int j = 0; j < m; j++) {
        if (j > 0) cout << " ";  
        cout << matriz[i][j];
    }
    cout << endl;
}




    return 0;
}