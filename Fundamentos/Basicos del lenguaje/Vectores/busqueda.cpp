#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() {

    int n,x,l1,l2;
    cin>>n;
    vector<int> arreglo(n);

    for(int &i:arreglo) {
        cin>>i;
    }

    cin>>x;
    vector<char>SN(x);

    for (int i = 0; i < x; i++)
    {
        cin>>l1;
        SN[i]=( find(arreglo.begin(), arreglo.end(),l1) !=arreglo.end()? 'S':'N');
    }

    for (char i : SN)
    {
        cout<<i<<endl;

    }

    return 0;
}