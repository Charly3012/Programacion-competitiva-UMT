#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;  

    // Crear una matriz para almacenar las calificaciones
    vector<vector<int>> calificaciones(N, vector<int>(M));

    // Leer las calificaciones
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> calificaciones[i][j];
        }
    }

    // Calcular y mostrar el promedio de cada alumno
    for (int j = 0; j < M; j++) {
        int suma = 0;
        for (int i = 0; i < N; i++) {
            suma += calificaciones[i][j];
        }
        int promedio = suma / N;  // División entera para redondear hacia abajo
        cout << promedio << " ";
    }
    cout << endl;

    return 0;
}
