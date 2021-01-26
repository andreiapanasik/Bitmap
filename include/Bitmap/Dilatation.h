#ifndef Dilatation_h
#define Dilatation_h
#include "Transformation.h"

class Dilatation : public Transformation
{
public:
    /*
     * Funkcja tworze dylatacju tablicy
     * @param obj referencja do objektu zawierającego tablice
     */
    void transform(BitmapExt& obj);
};

#endif
