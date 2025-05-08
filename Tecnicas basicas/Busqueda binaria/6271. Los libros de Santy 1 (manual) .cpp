//Link to Omgea Up: https://omegaup.com/arena/problem/Los-libros-de-Santy-1

#include <bits/stdc++.h>
using namespace std;


// Función de búsqueda binaria que retorna la posición de un libro dado su ID
int buscarLibro(const vector<int>& libros, int objetivo) {
    int izquierda = 0;
    int derecha = libros.size() - 1;

    while (izquierda <= derecha) {
        int medio = (izquierda + derecha) / 2;

        if (libros[medio] == objetivo) {
            return medio; // libro encontrado
        } else if (libros[medio] < objetivo) {
            izquierda = medio + 1; // buscar en la mitad derecha
        } else {
            derecha = medio - 1; // buscar en la mitad izquierda
        }
    }

    return -1; // no encontrado (aunque el problema asume que siempre está)
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    vector<int> libros(N); // IDs de los libros
    for (int i = 0; i < N; ++i) {
        cin >> libros[i];
    }

    vector<int> consultas(Q); // IDs de los libros que Santy quiere encontrar
    for (int i = 0; i < Q; ++i) {
        cin >> consultas[i];
    }

    // Para cada libro que Santy quiere, usamos búsqueda binaria
    for (int i = 0; i < Q; ++i) {
        int posicion = buscarLibro(libros, consultas[i]);
        cout << posicion << " ";
    }

    cout << endl;
    return 0;
}