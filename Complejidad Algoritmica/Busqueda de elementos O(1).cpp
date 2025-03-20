#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, Q, num;
    cin >> N;
    unordered_set<int> elementos;

    for (int i = 0; i < N; i++) {
        cin >> num;
        elementos.insert(num);
    }

    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> num;
        if (elementos.count(num))
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
