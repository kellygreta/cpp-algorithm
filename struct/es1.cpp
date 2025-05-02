/******************************************************************************
Esercizio 1: Informazioni sugli studenti
Scrivi un programma che:
   1.    Legga da tastiera le informazioni di 3 studenti (nome, età, media voti).
   2.    Salvi queste informazioni in un array di struct.
   3.    Stampi il nome degli studenti con una media voti superiore a 27 (su 30).

*******************************************************************************/
#include <iostream>
#include <string> //per usare string
using namespace std;

// Definizione della struttura Studente
struct Studente {
    string nome;
    int eta;
    float votoMedio;
};

int main() {
    // Dichiarazione di un array di 3 studenti
    //tipo dell'array seguito dal nome dell'array
    Studente studenti[3];

    // Lettura delle informazioni da tastiera per 3 studenti
    for (int i = 0; i < 3; i++) {
        cout << "Inserisci il nome dello studente " << i + 1 << ": ";
        cin >> studenti[i].nome;
        cout << "Inserisci l'età dello studente " << i + 1 << ": ";
        cin >> studenti[i].eta;
        cout << "Inserisci la media voti dello studente " << i + 1 << ": ";
        cin >> studenti[i].votoMedio;
    }

    // Stampa dei nomi degli studenti con media voti superiore a 27
    cout << "\nStudenti con media voti superiore a 27:\n";
    for (int i = 0; i < 3; i++) {
        if (studenti[i].votoMedio > 27) {
            cout << studenti[i].nome << "\n";
        }
    }

    return 0;
}