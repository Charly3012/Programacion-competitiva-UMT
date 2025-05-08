//Problem on OmegaUp: https://omegaup.com/arena/problem/AcomodandoOMI
//Complexity: O(N^2)

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findPosition(int arr[], int n, int number) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n;
    cin >> n;  
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    int original = arr[0];  

    bubbleSort(arr, n);

    int pos;
    for (int i = 0; i < n; i++) {
        if (arr[i] == original) {
            pos = i; 
        }
    }

    cout << pos << endl;  
    return 0;
}
