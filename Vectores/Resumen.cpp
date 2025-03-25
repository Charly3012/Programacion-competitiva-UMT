#include <bits/stdc++.h>
using namespace std;
int main() {

    vector<int> arreglo;

    // arreglo.push_back(12);
    // arreglo.push_back(78);
    // arreglo.push_back(154);
    // arreglo.push_back(8);
    // arreglo.push_back(78);

    // for(int elemento : arreglo)
    // {
    //     cout << elemento << " "; 
    // }
    // cout << endl;

    // arreglo.push_back(2345);
    // arreglo.push_back(2345);


    
    
    //Meter datos desde consola 
    // cout << "ingrese el dato que quieres meter" << endl;
    int dato;
    cin >> dato;
    arreglo.push_back(dato);
    cin >> dato;
    arreglo.push_back(dato);
    cin >> dato;
    arreglo.push_back(dato);
    cin >> dato;
    arreglo.push_back(dato);
    cin >> dato;
    arreglo.push_back(dato);
    cin >> dato;
    arreglo.push_back(dato);
    
    for(int elemento : arreglo)
    {
        cout << elemento << " "; 
    }



    // 1. Leer múltiples datos en un vector
    int n;
    cout << "Ingrese el número de elementos: ";
    cin >> n;

    vector<int> v(n); // Crear vector de tamaño n
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Lectura directa
    }

    // 2. Métodos esenciales
    v.push_back(100);  // Agregar al final
    v.pop_back();      // Eliminar último elemento
    cout << "Primer elemento: " << v.front() << "\n"; // Primer elemento
    cout << "Último elemento: " << v.back() << "\n";  // Último elemento
    cout << "Tamaño actual: " << v.size() << "\n";    // Tamaño del vector

    // // 3. Ordenar y buscar
    // sort(v.begin(), v.end());  // Ordenar ascendente
    // reverse(v.begin(), v.end()); // Invertir vector
    // if (binary_search(v.begin(), v.end(), 5)) {
    //     cout << "El 5 está en el vector\n";
    // }

    // // 4. Iteradores
    // cout << "Elementos del vector: ";
    // for (auto it = v.begin(); it != v.end(); it++) {
    //     cout << *it << " ";
    // }
    // cout << "\n";

    // // 5. Eliminar un elemento en una posición específica
    // if (!v.empty()) v.erase(v.begin() + 1); // Elimina segundo elemento

    // // 6. Eliminar duplicados (requiere ordenar primero)
    // v.erase(unique(v.begin(), v.end()), v.end());

    // // 7. Rellenar todo el vector con un valor
    // fill(v.begin(), v.end(), -1); // Todos los elementos serán -1

    // // 8. Crear un vector con valores inicializados
    // vector<int> otro(5, 42); // {42, 42, 42, 42, 42}

    // // 9. Acceder de forma segura (con at())
    // cout << "Elemento en posición 2: " << v.at(2) << "\n";

    return 0;
}
