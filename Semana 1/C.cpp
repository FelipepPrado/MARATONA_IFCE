#include <iostream>
using namespace std;

int main() {
    int i;
    int pos1;
    int vetor[100];
    cin >> vetor[0];
    pos1 = 0;
    for(i = 1 ; i < 100; i++){
        
        cin >> vetor[i];
        
        if(vetor[pos1] < vetor[i]){
            pos1 = i;
        }
    }
    cout << vetor[pos1] << endl;
    cout << pos1 << endl;
    return 0;
}
