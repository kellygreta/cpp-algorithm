#include <iostream>
using namespace std;

int main() {
    int numeri[5];
    int somma = 0;
    
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci un numero: ";
        cin >> numeri[i];
        somma += numeri[i];
    }
    
    cout << "La somma degli elementi è: " << somma << endl;
    
    return 0;
}