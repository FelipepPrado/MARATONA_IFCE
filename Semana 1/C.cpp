#include <iostream>
using namespace std;

int main() {
    int i;
    int pos1, pos2;
    int vetor[100];
    cin >> vetor[0];
    pos1 = 0;
    pos2 = 0;
    for(i = 1 ; i < 5; i++){
        
        cin >> vetor[i];
        
        if(vetor[pos1] < vetor[i]){
            pos1 = i;
        }
        if(vetor[pos2] > vetor[i]){
            pos2 = i;
        }
    }
    cout << vetor[pos1] << endl;
    cout << vetor[pos2] << endl
    return 0;
}
