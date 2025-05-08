//Link to Omgea Up: https://omegaup.com/arena/problem/Los-libros-de-Santy-1

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    vector<int> libros(N);
    for (int i = 0; i < N; ++i) {
        cin >> libros[i];
    }

    vector<int> consultas(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> consultas[i];
    }

    for (int i = 0; i < Q; ++i) {
        // lower_bound devuelve un iterador al primer elemento >= consultas[i]
        auto it = lower_bound(libros.begin(), libros.end(), consultas[i]);

        int posicion = it - libros.begin(); // posición = distancia desde el inicio
        cout << posicion << " ";
    }

    cout << endl;
    return 0;
}