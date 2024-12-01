#include <iostream>
using namespace std;

int main() {
    int h1, h2, m1, m2, temp1, temp2;
    cin >> h1 >> m1 >> h2 >> m2;
    temp1 = h2 - h1;
    temp2 = m2 - m1;

    if(h1 == h2 && m2 <= m1){
        temp1 = 24;
    }
    else if(temp1 < 0){
        temp1 += 24;
    }

    if(temp2 < 0){
        temp1 -= 1;
        temp2 += 60;
    }
    cout << "O JOGO DUROU " << temp1 << " HORA(S) E " << temp2 << " MINUTO(S)\n";
    return 0;
}
