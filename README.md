# cpp-algorithm
- [basic](#basic)
- [array](#array)
- [bubble](#bubble)

# basic
**Esercizio 1: “Hello, World!”**  <br/>
Obiettivo: Stampare un messaggio sullo schermo. <br/>
Scrivi un programma che stampi la frase “Hello, World!”.
Prova a modificare il messaggio in qualcosa di diverso.

**Esercizio 2: Variabili e Tipi di Dati** <br/>
Obiettivo: Dichiarare variabili e stampare i loro valori. <br/>
Crea un programma che dichiara due variabili: un numero intero (int), un numero a virgola mobile (float).
Assegna valori a queste variabili e stampali sullo schermo.

**Esercizio 3: Operazioni Aritmetiche** <br/>
Obiettivo: Eseguire operazioni aritmetiche di base. <br/>
Scrivi un programma che prende due numeri interi, esegue le operazioni di somma, sottrazione, moltiplicazione e divisione, e stampa i risultati.

**Esercizio 4: Condizioni (if-else)** <br/>
Obiettivo: Usare costrutti condizionali. <br/>
Scrivi un programma che chiede all’utente di inserire un numero. Il programma dovrebbe verificare se il numero è positivo, negativo o zero e stampare un messaggio appropriato.

**Esercizio 5: Cicli (for)** <br/>
Obiettivo: Usare un ciclo for.  <br/>
Scrivi un programma che stampa i numeri da 1 a 10 utilizzando un ciclo for.

**Esercizio 6: Cicli (while)** <br/>
Obiettivo: Usare un ciclo while. <br/>
Scrivi un programma che chiede all’utente di inserire un numero. Se il numero è negativo, continua a chiedere un numero fino a quando l’utente non inserisce un numero positivo.

**Esercizio 7: Funzioni** <br/>
Obiettivo: Definire e utilizzare funzioni. <br/>
Scrivi una funzione che prende due numeri interi come parametri e restituisce la loro somma.
Usa la funzione nel main() e stampa il risultato.

**Esercizio 8: switch** <br/>
Obiettivo: Usare l’istruzione switch. <br/>
Scrivi un programma che chiede all’utente di inserire un numero intero da 1 a 3. Il programma dovrebbe stampare un messaggio diverso per ogni numero utilizzando una struttura switch.

# array 
**Teoria:**
L'array è un insieme di elementi omogenei tra loro e si realizza in c e c++ aggregando variabili dello stesso tipo.
un array si definisce con la seguente dichiarazione
```
  tipo NomeArray [dimensione];
```
es:
```
double coeff[10]; //la seguente dichiarazione crea un array di 10 coefficienti di tipo double
```

**Esercizio 1: Dichiarazione e Stampa di un Array** <br/>
Obiettivo: Imparare a dichiarare un array e a stampare i suoi elementi. <br/>
Dichiarare un array di 5 interi con i seguenti valori: {10, 20, 30, 40, 50}.
Stampare ciascun valore dell’array.

**Esercizio 2: Inserimento di Valori in un Array** <br/>
Obiettivo: Chiedere all’utente di inserire valori in un array. <br/>
Dichiarare un array di 5 interi vuoto.
Chiedere all’utente di inserire 5 numeri e memorizzarli nell’array.
Stampare i numeri inseriti.

**Esercizio 3: Somma degli Elementi di un Array** <br/>
Obiettivo: Calcolare la somma degli elementi di un array. <br/>
Dichiarare un array di 5 interi.
Chiedere all’utente di inserire i valori nell’array.
Calcolare e stampare la somma degli elementi.

**Esercizio 4: Trovare il Valore Massimo in un Array** <br/>
Obiettivo: Trovare il valore massimo presente in un array. <br/>
Dichiarare un array di 5 interi.
Chiedere all’utente di inserire i valori nell’array.
Trovare e stampare il valore massimo nell’array.

**Esercizio 5: Invertire un Array** <br/>
Obiettivo: Invertire l’ordine degli elementi di un array. <br/>
Dichiarare un array di 5 interi.
Chiedere all’utente di inserire i valori nell’array.
 Stampare l’array in ordine inverso.
 
**Esercizio 6: Ricerca di un Elemento in un Array** <br/>
Obiettivo: Cercare un elemento specifico in un array. <br/>
Dichiarare un array di 5 interi.
Chiedere all’utente di inserire i valori nell’array.
Chiedere all’utente un numero da cercare e verificare se è presente nell’array.
Stampare un messaggio che indichi se il numero è stato trovato o meno.

**Esercizio 7: Media degli Elementi di un Array** <br/>
Obiettivo: Calcolare la media dei valori di un array. <br/>
Dichiarare un array di 5 interi.
Chiedere all’utente di inserire i valori nell’array.
Calcolare e stampare la media dei valori.

# bubble

**Teoria:**
a ogni iterazione controllo gli elementi adiacenti (n e n+1) per tutta la lunghezza dell'array e se non sono in ordine li scambio. l'algoritmo termina quando non si verificheranno più scambi.

pseudocodice: 
```
algoritmo bubble sort (array[0...n-1])
i <- 1
DO
  scambiato <- false
  FOR j<-1 TO n-i DO
    IF A[j]<A[j-1] THEN
      scambia A[j] con A[j-1]
      scambiato <- true
  i<-i+1
WHILE scambiato and i<n
```

#cfr = n-1 per n-1 volte -> O(n^2) <br/>
spazio = O(1)

**Esercizio: Bubble Sort** <br/>
Obiettivo: Ordinare un array di numeri in ordine crescente utilizzando l’algoritmo di ordinamento bubble sort. <br/>
Dichiarare un array di 5 interi.
Chiedere all’utente di inserire i valori nell’array.
Ordinare l’array usando il bubble sort.
 Stampare l’array ordinato.
