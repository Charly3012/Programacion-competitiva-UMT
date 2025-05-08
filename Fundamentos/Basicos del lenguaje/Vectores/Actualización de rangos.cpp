#include <bits/stdc++.h>
using namespace std;
int main() {

    //Arreglo A con los N elementos
    vector<int> a;
    int n; 
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        a.push_back(aux);
    }

    //K actualizaciones seguidas de  li y ri
    int k; 
    cin >> k;

    for (int j = 0; j < k; j++)
    {
        int l, r; 
        cin >> l >> r;
        
        for (int p = (l-1); p < r; p++)
        {
            a.at(p)++;
            //a.at(p) = a.at(p) + 1;
        }

    }

    for(int item : a)
    {
        cout << item << " ";
    }
    cout << endl;
    
    return 0;
}
