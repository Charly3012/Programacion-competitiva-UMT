//Problem on OmegaUp: https://omegaup.com/arena/problem/Achecando-Igualdades-2
//Complexity: N^2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int minChanges = n;  // Empezamos con el número máximo de cambios posibles
    
    // Vamos a comparar cada elemento con todos los demás para contar las ocurrencias
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
        // Si el número que estamos considerando tiene más ocurrencias,
        // calculamos cuántos cambios se necesitarían para que todos sean iguales
        minChanges = min(minChanges, n - count);
    }

    cout << minChanges << endl;

    return 0;
}
