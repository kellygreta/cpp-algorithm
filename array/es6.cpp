#include <iostream>
using namespace std;

int main() {
    int numeri[5];
    int daCercare;
    bool trovato = false;
    
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci un numero: ";
        cin >> numeri[i];
    }
    
    cout << "Inserisci il numero da cercare: ";
    cin >> daCercare;
    
    for (int i = 0; i < 5; i++) {
        if (numeri[i] == daCercare) {
            trovato = true;
            break;
        }
    }
    
    if (trovato) {
        cout << "Numero trovato!" << endl;
    } else {
        cout << "Numero non trovato." << endl;
    }
    
    return 0;
}