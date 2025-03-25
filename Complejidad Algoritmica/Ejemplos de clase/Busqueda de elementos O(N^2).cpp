#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, Q, num;
    cin >> N;
    vector<int> elementos(N);

    for (int i = 0; i < N; i++) {
        cin >> elementos[i];
    }

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> num;
        bool encontrado = false;

        // Recorrer el arreglo dos veces innecesariamente
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                if (elementos[k] == num) {
                    encontrado = true;
                }
            }
        }

        if (encontrado)
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
