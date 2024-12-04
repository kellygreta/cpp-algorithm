#include <iostream>
using namespace std;

int main() {
    int numeri[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci un numero: ";
        cin >> numeri[i];
    }
    
    cout << "Array in ordine inverso: ";
    for (int i = 4; i >= 0; i--) {
        cout << numeri[i] << " ";
    }
    cout << endl;
    
    return 0;
}