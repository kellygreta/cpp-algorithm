#include <iostream>
#include <string>
using namespace std;

// Definizione della struct Prodotto
struct Prodotto {
    string nome;
    float prezzo;
    int quantita;
};

int main() {
    Prodotto prodotti[5]; // Array di 5 prodotti
    float massimo = 0;
    string prodottoPiuCostoso;

    // Inserimento dei dettagli dei prodotti
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci il nome del prodotto " << i + 1 << ": ";
        cin >> prodotti[i].nome;
        cout << "Inserisci il prezzo del prodotto " << i + 1 << ": ";
        cin >> prodotti[i].prezzo;
        cout << "Inserisci la quantità del prodotto " << i + 1 << ": ";
        cin >> prodotti[i].quantita;
        
        // Trova il prodotto più costoso
        if (prodotti[i].prezzo > massimo) {
            massimo = prodotti[i].prezzo;
            prodottoPiuCostoso = prodotti[i].nome;
        }
    }

    // Stampa il prodotto più costoso
    cout << "\nIl prodotto più costoso è: " << prodottoPiuCostoso << " con un prezzo di: " << massimo << endl;

    return 0;
}