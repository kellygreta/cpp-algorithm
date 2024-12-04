#include <iostream>
using namespace std;

int main() {
    int numeri[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci un numero: ";
        cin >> numeri[i];
    }
    
    // Bubble Sort
    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            if (numeri[j] > numeri[j + 1]) {
                int temp = numeri[j];
                numeri[j] = numeri[j + 1];
                numeri[j + 1] = temp;
            }
        }
    }
    
    cout << "Array ordinato: ";
    for (int i = 0; i < 5; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;
    
    return 0;
}