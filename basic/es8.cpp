#include <iostream>
using namespace std;

int main() {
    int scelta;
    cout << "Inserisci un numero da 1 a 3: ";
    cin >> scelta;
    
    switch (scelta) {
        case 1:
            cout << "Hai scelto il numero 1!" << endl;
            break;
        case 2:
            cout << "Hai scelto il numero 2!" << endl;
            break;
        case 3:
            cout << "Hai scelto il numero 3!" << endl;
            break;
        default:
            cout << "Numero non valido." << endl;
            break;
    }
    
    return 0;
}