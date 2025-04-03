//Problem on OmegaUp: https://omegaup.com/arena/problem/AcomodandoOMI
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
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int original = v[0]; 

    sort(v.begin(), v.end()); 

    int pos = find(v.begin(), v.end(), original) - v.begin();

    cout << pos << endl; 
    return 0;
}