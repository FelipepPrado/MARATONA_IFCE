#include <iostream>
using namespace std;

int main() {
    int par, imp, pos, neg, num;
    par = imp = pos = neg = 0;
    
    for(int i = 0; i < 5; i++){
        cin >> num;
        if(num%2 == 0){
            par++;
            if(num > 0){
                pos++;
            }
            else if(num < 0){
                neg++;
            }
        }
        else{
            imp++;
            if(num > 0){
                pos++;
            }
            else if(num < 0){
                neg++;
            }
        }
    }
    cout << par << " valor(es) par(es)\n";
    cout << imp << " valor(es) impar(es)\n";
    cout << pos << " valor(es) positivo(s)\n";
    cout << neg << " valor(es) negativo(s)\n";
    return 0;
}
