#include <iostream>
using namespace std;

int main() {
    int numeri[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci un numero per l'elemento " << i << ": ";
        cin >> numeri[i];
    }
    
    cout << "Numeri inseriti: ";
    for (int i = 0; i < 5; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;
    
    return 0;
}