#include <iostream>
using namespace std;

int main() {
    int numero;
    bool flag = true;

    // do {
    //     cout << "Inserisci un numero positivo: ";
    //     cin >> numero;
    // } while (numero < 0);

    //esco dal ciclo while solo se il numero è negativo
     while (flag==true){ //while(flag)
        cout << "Inserisci un numero pari: ";
        cin >> numero;
        if(numero<0){
            flag = false;
        }
     }
    
    cout << "Hai inserito: " << numero << endl;
    
    return 0;
}