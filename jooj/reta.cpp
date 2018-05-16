#include "reta.h"
#include <iostream>
#include "figurageometrica.h"
#include "screen.h"

using namespace std;

/*! @brief Construtor com argumentos para Reta
	   Recebe os pontos x,y iniciais primeiro e depois os pontos
	   x,y finais para a reta.

*/

Reta::Reta(int _x1, int _y1, int _x2, int _y2){
	x1=_x1;
	x2=_x2;
	y1=_y1;
	y2=_y2;
}

/*! @brief Função de desenho da Reta
	  usando os dados da reta, desenha ela numa matriz.
*/

void Reta::draw(Screen &s){
    int aux;
    int dx = x2 - x1;
    int dy = y2 - y1;
    int inclinacao=0;
    if(dx<0) // caso ponto final < ponto inicial
    {
        aux=x1;
        x1=x2;
        x2=aux;
        dx=x2-x1;
        aux=y1;
        y1=y2;
        y2=aux;
        dy=y2-y1;
    }
    if(dy<0)
        inclinacao = -1;
    else
        inclinacao = 1;

    int incE, incNE, d;

    //Vertex pixel = pixel1;
    int x0=x1;
    int y0=y1;

    s.setPixel(x0,y0);
    if(dx >= inclinacao*dy){    // m<=1
        if(dy<0){ // caso y2<y1
            d = 2*dy+dx;
            while(x0<x2){
                if(d<0){ // escolhido é o I
                    d += 2*(dy+dx);
                    x0++;
                    y0--;
                }
                else{ // escolhido é o S
                    d+=2*dy;
                    x0++; // varia apenas no eixo x
                }
                s.setPixel(x0,y0);
            }
        }
        else{ // caso y1<y2
            d=2*dy-dx;
            while(x0<x2){
                if(d<0){ // escolhido é o I
                    d+=2*dy;
                    x0++; // varia apenas no eixo x
                }
                else{ // escolhido é o S
                    d+=2*(dy-dx);
                    x0++;
                    y0++;
                }
s.setPixel(x0,y0);
            }
        }
    }
    else{ // |m|>1
        if(dy<0){ // caso y2<y1
            d=dy+2*dx;
            while(y0 > y2){
                if(d<0){
                    d += 2*dx;
                    y0--; // varia apenas no eixo y
                }
                else{
                    d+=2*(dy+dx);
                    x0++;
                    y0--;
                }
s.setPixel(x0,y0);
            }
        }
        else{ // caso y1<y2
            d=dy-2*dx;
            while(y0<y2){
                if(d<0){
                    d+=2*(dy-dx);
                    x0++;
                    y0++;
                }
                else{
                    d+=-2*dx;
                    y0++; // varia apenas no eixo y
                }
                s.setPixel(x0,y0);
                }
            }
        }
    s.setPixel(x2,y2);
    cout << "desenhando reta" << endl;
}
