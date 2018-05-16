#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica
{
public:

  /*! @brief Construtor padrão de uma figura geometrica

*/

    FiguraGeometrica();

    /*! @brief função virtual para desenho de figuras geometricas
*/

    virtual void draw()=0;
};

#endif // FIGURAGEOMETRICA_H
