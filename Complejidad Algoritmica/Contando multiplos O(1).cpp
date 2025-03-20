#include <iostream>
using namespace std;

int main() {
    int K, A, B;
    cin >> K >> A >> B;

    // Calculamos cuántos múltiplos de K hay en [1, B] y en [1, A-1]
    int multiplesHastaB = B / K;
    int multiplesHastaA = (A - 1) / K;

    // La diferencia nos da cuántos múltiplos hay en [A, B]
    cout << (multiplesHastaB - multiplesHastaA) << endl;

    return 0;
}
