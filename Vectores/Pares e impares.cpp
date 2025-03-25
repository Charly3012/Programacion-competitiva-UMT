#include <bits/stdc++.h>
using namespace std;
int main() {

    vector<int> a;

    int n; 
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux;
        a.push_back(aux);
    }

    vector<int> pares, impares;

    for (int i = 0; i < a.size(); i++)
    {
        //Si modulo es 0 = 
        if(a.at(i) % 2 == 0){
            pares.push_back(a.at(i));
        }else{
            impares.push_back(a.at(i));
        }
    }
    

    for(int elemento : pares)
    {
        cout << elemento << " "; 
    }
    cout << endl;
    for(int elemento : impares)
    {
        cout << elemento << " "; 
    }
    cout << endl;
    


    return 0;
}
