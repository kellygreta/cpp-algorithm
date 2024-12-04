#include <iostream>
#include <string> //se uso il tipo string devo includere questa libreria
using namespace std;

//ASCII ART
//  _._     _,-'""`-._
// (,-.`._,'(       |\`-/|
//     `-.-' \ )-`( , o o)
//           `-    \`_`"'-

int main() {
    //dichiarazione di variabili

    //NUMERI INTERI
    int anno; //numero intero che usa 32 bit
    short int x; //numero intero che usa 16 bit
    long int y; //numero intero che usa almeno 32 bit (quindi 32 bit o più)

    //NUMERI CON LA VIRGOLA
    float statura; //numeri in virgola mobile in precisione singola (32 bit)
    
    double staturaX; //numeri in virgola mobile in precisione singola (64 bit)
    double areaCerchio;

    //caratteri singoli
    char lettera; //un carattere
    lettera = 'a'; //apici

    //si trova solo in c++ (in altri linguaggi può essere boolean) 
    //può assumere solo i valori true o false
    bool flag;

    int x = 1;

    flag=true;
    //while(flag) è come scrivere while(flag==true)
    while(flag==true){
        cout << "inserisci un positivo: ";
        cin >> x;
        if(x<0){
            flag=false;
        }
    }

    //ARRAY
    //l'array è un inisieme di elementi omogenei tra loro e si realizza in C++ aggregando variabili dello stesso tipo
    int num[5] = {3,2,4,7,1};
    //la numerazione degli indici inizia da 0

    cout << "array ordinato dalla pos 0 a 4" << "\n"; 
    //ciclo for che stampa il contenuto dell'array in ordine
    for (int i = 0; i < 5; i++){
        cout << num[i] << "\n";
    }

    //ciclo for che stampa il contenuto dell'array al contrario
    cout << "array ordinato dalla pos 4 a 0" << "\n"; 
    for (int i = 4; i >= 0; i--){
        cout << num[i] << "\n";
    }

    //STRINGA
    string nome;
    
    //inizializzazione variabili
    anno = 2024;
    statura = 1.68;
    nome = "Maria Rossi";
    int eta = 16;

    //stampa dei caratteri che compongono la stringa nome
    //come se fosse un array di caratteri
    //char saluto[4]="ciao"
    for (int i = 0; i < 5; i++){
        cout << nome[i] << "\n";
    }

    // cout << "Hello, World!" << endl;
    // cout << "Hello, World!" << "\n";

    //posso concatenare gli output usando le parentesi angolari <<
    cout << anno << " " << statura << " " << nome << "\n";

    //AND -> in c++ per verificare che entrambe le condizioni siano verificate contemporaneamente si usa &&
    //OR -> in c++ per verificare che almeno una delle condizioni sia verificata  si usa ||

    if (anno==2024 && eta<18){
        cout << nome << " è uno studente delle superiori nell'a.s. 2024/25 con meno di 18 anni" << "\n";
    }

    //è la stessa cosa di scrivere
    // if (anno==2024){
    //     if( eta<18){
    //          cout << nome << "è uno studente del volta nell'a.s. 2024/25 con meno di 18 anni" << "\n";
    //  }   
    // }

    return 0;
}