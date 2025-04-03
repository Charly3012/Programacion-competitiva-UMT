//Problem on OmegaUp: https://omegaup.com/arena/problem/Resta-Interminable
//Complejidad del algorimo: O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //Nota: Ten en cuenta que a y b pueden llegar a ser 10^15
    long long a, b; 
    cin >> a >> b;

    cout << b % a << endl;

    return 0;
}