#include <iostream>
#include <string>
using namespace std;

// Definizione della struct Articolo
struct Articolo {
    string nome;
    float prezzo;
    int quantita;
};

int main() {
    Articolo articoli[5]; // Array di 5 articoli
    float costoTotale = 0;

    // Inserimento dei dettagli per ogni articolo
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci il nome dell'articolo " << i + 1 << ": ";
        cin >> articoli[i].nome;
        cout << "Inserisci il prezzo dell'articolo " << i + 1 << ": ";
        cin >> articoli[i].prezzo;
        cout << "Inserisci la quantità dell'articolo " << i + 1 << ": ";
        cin >> articoli[i].quantita;
        
        // Calcolo il costo totale
        costoTotale += articoli[i].prezzo * articoli[i].quantita;
    }

    // Stampa del riepilogo e del costo totale
    cout << "\nRiepilogo della spesa:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Articolo: " << articoli[i].nome 
             << ", Prezzo: " << articoli[i].prezzo 
             << ", Quantità: " << articoli[i].quantita 
             << ", Costo: " << articoli[i].prezzo * articoli[i].quantita 
             << endl;
    }
    
    cout << "\nIl costo totale della spesa è: " << costoTotale << endl;

    return 0;
}