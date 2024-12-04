#include <iostream>
using namespace std;

// Funzione per l'algoritmo Bubble Sort
void bubbleSort(int arr[], int n) {
    // Ciclo esterno che passa su tutto l'array
    for (int i = 0; i < n - 1; i++) {
        // Ciclo interno per confrontare e scambiare gli elementi
        for (int j = 0; j < n - i - 1; j++) {
            // Se l'elemento corrente è maggiore del successivo, scambiali
            if (arr[j] > arr[j + 1]) {
                // Scambio
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Funzione per stampare l'array
void stampaArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Dichiarazione e inizializzazione di un array
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);  // Determina la dimensione dell'array

    cout << "Array originale: ";
    stampaArray(arr, n);

    // Ordina l'array con Bubble Sort
    bubbleSort(arr, n);

    cout << "Array ordinato: ";
    stampaArray(arr, n);

    return 0;
}