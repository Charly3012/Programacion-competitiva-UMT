//Problem on OmegaUp: https://omegaup.com/arena/problem/Achecando-Igualdades-2
//Complexity: O(N)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n; 
    cin >> n;

    unordered_map<int, int> frec;

    int aux;
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        frec[aux]++;
    }

    int mostFrec = aux;
    int maxCount = frec[mostFrec];

    for(auto& i : frec)
    {
        if(i.second > maxCount)
        {
            mostFrec = i.first;
            maxCount = i.second;
        }
    }

    cout << (n - maxCount) << endl;

    return 0;
}