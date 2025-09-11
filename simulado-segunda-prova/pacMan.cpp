#include <iostream>
#include <queue>
using namespace std;

struct Ponto {
    int x, y;
};

int main() {
    int L, C;
    cin >> L >> C;

    char grid[30][30];
    int dist[30][30];

    Ponto start, end;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
            dist[i][j] = -1; 

            if (grid[i][j] == 'f') {
                start.x = i;
                start.y = j;
            }
            if (grid[i][j] == 'p') {
                end.x = i;
                end.y = j;
            }
        }
    }

    // Movimentos (cima, baixo, esquerda, direita)
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    queue<Ponto> fila;

    // Começa do fantasma
    fila.push(start);
    dist[start.x][start.y] = 0;

    while (!fila.empty()) {
        Ponto atual = fila.front();
        fila.pop();

        // verifica se chegou no pacMan
        if (atual.x == end.x && atual.y == end.y) {
            cout << dist[atual.x][atual.y] << endl;
            return 0;
        }

        // Explorar vizinhos
        for (int k = 0; k < 4; k++) {
            int nx = atual.x + dx[k];
            int ny = atual.y + dy[k];

            if (nx >= 0 && nx < L && ny >= 0 && ny < C && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[atual.x][atual.y] + 1;
                fila.push({nx, ny});
            }
        }
    }

    // que atividade é essa meudeus

    return 0;
}
