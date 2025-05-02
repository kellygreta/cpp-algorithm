#include <iostream>
#include <string>
using namespace std;

// Definizione della struct Libro
struct Libro {
    string titolo;
    string autore;
    int annoPubblicazione;
};

int main() {
    Libro libri[5]; // Array di 5 libri

    // Inserimento dei dettagli dei libri
    for (int i = 0; i < 5; i++) {
        cout << "Inserisci il titolo del libro " << i + 1 << ": ";
        cin.ignore(); // Ignora il carattere di newline rimasto nel buffer
        getline(cin, libri[i].titolo);
        cout << "Inserisci l'autore del libro " << i + 1 << ": ";
        getline(cin, libri[i].autore);
        cout << "Inserisci l'anno di pubblicazione del libro " << i + 1 << ": ";
        cin >> libri[i].annoPubblicazione;
    }

    // Stampa i titoli dei libri pubblicati dopo il 2000
    cout << "\nLibri pubblicati dopo il 2000:\n";
    for (int i = 0; i < 5; i++) {
        if (libri[i].annoPubblicazione > 2000) {
            cout << libri[i].titolo << " di " << libri[i].autore << " (" << libri[i].annoPubblicazione << ")" << endl;
        }
    }

    return 0;
}