#include <iostream>
using namespace std;

int main() {
    int K, A, B, count = 0;
    cin >> K >> A >> B;

    for (int i = A; i <= B; i++) {  // Recorremos cada número en el rango
        if (i % K == 0) {           // Verificamos si es múltiplo de K
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
