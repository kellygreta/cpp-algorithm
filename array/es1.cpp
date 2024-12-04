#include <iostream>
using namespace std;

int main() {
    int numeri[5] = {10, 20, 30, 40, 50};
    
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << numeri[i] << endl;
    }
    
    return 0;
}