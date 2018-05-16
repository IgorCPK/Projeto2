#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
private:
  int x0,y0,L,H;
  bool fillmode;

public:
    Retangulo();
    Retangulo(int _x0, int _y0, int _L, int _H, bool _fillmode);
    void draw();
};

#endif // RETANGULO_H
