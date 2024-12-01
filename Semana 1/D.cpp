#include <iostream>
using namespace std;
 
int main() {
    int n1, n2, n3, n4, n5, soma;
    soma = 0;
    
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    
    soma = n1*300 + n2*1500 + n3*600 + n4*1000 + n5*150 + 225;
    cout << soma << endl;
    return 0;
}
