#include <bits/stdc++.h>
using namespace std;
int main() {

    //N
    //Seguido de N elementos que vamos a guardar 
    int n;
    cin >> n;

    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int aux;
        cin >> aux; 
        a.push_back(aux);
    }
    

    //Ingresar por la K 
    int k;
    cin >> k; 

    //pedir l y r 
    for(int e =0; e < k; e++)
    {
        int l, r; 
        cin >> l >> r;

        for(int i = l ; i < r; i++)
        {
            a.at(i)++;
            //a.at(i) = a.at(i) + 1;
        }
    }

    for(int item : a)
    {
        cout << item << " ";
    }
    cout<<endl;

    return 0;
}
