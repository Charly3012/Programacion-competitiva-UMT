//Problem on OmegaUp: https://omegaup.com/arena/problem/Ordenar
//Complexity: O(n log n)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; 
    cin >> n; 

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux; 
        v.emplace_back(aux);
    }

    sort(v.begin(), v.end());

    for(int indice : v)
    {
        cout << indice << " ";
    }

    cout << endl;
    

    return 0;
}