#include <iostream>
#include <vector>
#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"

using namespace std;

int main(){
    Screen jooj(20,20);
    jooj.setBrush('@');
    //jooj.setPixel(0,0);
    //jooj.setPixel(1,1);
    //jooj.setPixel(2,2);
    //jooj.setPixel(3,3);
    Reta putz(0,0,8,7);
    putz.draw(jooj);
    cout << jooj;
    return 0;
}
