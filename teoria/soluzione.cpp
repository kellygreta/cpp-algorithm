#include <iostream>
using namespace std;

int main()
{
     cout << "--- START ---" << endl;
    cout << "--- QUIZ 3 ---" << endl;
    int x = 10;
    if(x>5 && x<20){
        cout << "Corretto"<< endl;
    }
   
    cout << "--- QUIZ 4 ---" << endl;
    int y = 0;
    while(y>10){
        y++;
    }
    cout << y << endl;
    
    cout << "--- QUIZ 5 ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }
    
    cout << "--- QUIZ 9 ---" << endl;
    int valori[3] = {2,4,6};
    cout<<valori[1]<<endl;
    
    cout << "--- QUIZ 10 ---" << endl;
    int somma=0;
    for (int i = 1; i <= 5; i++) {
        somma+=i;
    }
    cout<<somma<<endl;
    cout << "--- END ---" << endl;
    return 0;
}