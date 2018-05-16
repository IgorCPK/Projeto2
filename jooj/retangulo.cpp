#include "retangulo.h"
#include <iostream>
#include "screen.h"
using namespace std;

/*! @brief construtor padrão de retângulo


*/


Retangulo::Retangulo()
{

}

/*! @brief Construtor com argumentos do retângulo
 *          recebe os valores x,y do ponto inicial do retângulo, em seguida
 *          recebe sua largura, altura e uma variável de verdadeiro ou falso
 *          para ser preenchido ou não.
 *

*/


Retangulo::Retangulo(int _x0, int _y0, int _L, int _H, bool _fillmode){
  x0 = _x0;
  y0 = _y0;
  L = _L;
  H = _H;
  fillmode = _fillmode;


}


/*! @brief Método para desenho do retângulo em uma matriz
 *
 * Desenha o retângulo numa matriz usando os valores dados anteriormente.



*/


void Retangulo::draw(){
  int i=0, j=0;
  Screen ret(L,H);
  ret.setBrush('@');
if(fillmode == 0){

  for(i = 0, j = 0; i <= L; i++){
      ret.setPixel(i,j);

    }
  for(i = 0, j = 0; j <= H;j++){
      ret.setPixel(i,j);


    }
  for(j = H, i = 0; i <=L; i++){
      ret.setPixel(i,j);

    }
  for(i = L, j = 0; j <=H;j++){
      ret.setPixel(i,j);

    }

}
if(fillmode == 1){

    for(i = 0;i <=L;i++){
        for(j = 0;j<=H;j++){
            ret.setPixel(i,j);

          }

      }


}
}
