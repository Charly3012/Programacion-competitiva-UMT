//Problem on OmegaUp: https://omegaup.com/arena/problem/Resta-Interminable

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b; 
    cin >> a >> b;

    while(b >= a)
    {
        b = b -a;
    }

    cout << b << endl;

    return 0;
}