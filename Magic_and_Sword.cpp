#include <iostream>
#include <math.h>
using namespace std;

int verif(int w, int h, int x0, int y0, int cx, int cy, int raio){
    float i, j;
    float dist;
    
    if((cx >= x0) && (cx <= x0 + w) && (cy >= y0) && (cy <= y0 + h)){
                return 1;
    }
    
    for(i = x0; i <= x0 + w; i += w){
        for(j = y0; j <= y0 + h; j += 1){
            dist = (i - cx)*(i - cx) + (j - cy)*(j - cy);
            if(dist <= raio*raio){
                return 1;
            }
        }
    }
    for(i = y0; i <= y0 + h; i += h){
        for(j = x0; j <= x0 + w; j += 1){
            dist = (j - cx)*(j - cx) + (i - cy)*(i - cy);
            if(dist <= raio*raio){
                return 1;
            }
        }
    }
    return 0;
}

void dmg(char fname, int *pointer){
    if(fname == 'f'){
        *pointer = 200;
        *(pointer + 1) = 0;
    }
    else if(fname == 'w'){
        *pointer = 300;
        *(pointer + 1) = 1;
    }
    else if(fname == 'e'){
        *pointer = 400;
        *(pointer + 1) = 2;
    }
    else{
        *pointer = 100;
        *(pointer + 1) = 3;
    }
}

int main(){
    int raio[4][3] = {{20, 30, 50} , {10, 25, 40}, {25, 55, 70}, {18, 38, 60}};
    int dano[2];
    int i, t, j, level;
    int w, h, x0, y0, cx, cy; 
    cin >> t;
    
    string tip;
    
    for (i = 0; i < t; i++){
        
        cin >> w >> h >> x0 >> y0;
        cin >> tip;
        cin >> level >> cx >> cy;
        dmg(tip[0], dano);
	
        if(verif(w, h, x0, y0, cx, cy, raio[dano[1]][level-1])){
            cout << dano[0] << endl;
        }
        else{
            cout << 0 << endl;
        }
        
    }
    return 0;
}
