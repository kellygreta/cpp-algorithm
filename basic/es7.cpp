#include <iostream>
using namespace std;

int somma(int a, int b) {
    return a + b;
}

int main() {
    int x = 10;
    int y = 20;
    
    cout << "La somma di " << x << " e " << y << " è " << somma(x, y) << endl;
    
    return 0;
}