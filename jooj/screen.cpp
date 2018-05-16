#include "screen.h"
#include <iostream>
#include <vector>

Screen::Screen(int _nlin, int _ncol){
    //if(_ncol <= 0 || _nlin <= 0){
     //   exit(0);
    //}
    nlin=_nlin;
    ncol=_ncol;
    mat = vector< vector<char> >(nlin, vector<char>(ncol, '0'));
}

void Screen::setPixel(int x, int y){
    mat[x][y]=brush;
}
void Screen::clear(){
    for(int i=0;i<ncol;i++){
        for(int j=0;j<nlin;j++){
            mat[j][i]='0';
        }
    }
}
void Screen::setBrush(char _brush){
    brush = _brush;
}

ostream& operator<<(ostream &os, Screen &s){
    for(int i = 0; i < s.nlin; i++){
        for(int j = 0; j < s.ncol; j++){
            if(s.mat[i][j] != '0'){
                cout<<s.mat[i][j]<<" ";
            }else{
                cout << "  ";
            }
        }
        cout<<endl;
    }

    return os;
}
