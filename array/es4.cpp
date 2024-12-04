#include <iostream>
using namespace std;

int main() {
    int numeri[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci un numero: ";
        cin >> numeri[i];
    }
    
    int massimo = numeri[0];  // inizialmente assumiamo che il primo elemento sia il massimo
    
    for (int i = 1; i < 5; i++) {
        if (numeri[i] > massimo) {
            massimo = numeri[i];
        }
    }
    
    cout << "Il valore massimo è: " << massimo << endl;
    
    return 0;
}