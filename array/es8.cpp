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
    
    float media = static_cast<float>(somma) / 5;
    
    cout << "La media è: " << media << endl;
    
    return 0;
}