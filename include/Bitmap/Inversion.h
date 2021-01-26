#ifndef Invers_h
#define Invers_h
#include "Transformation.h"

class Inversion : public Transformation
{
public:
    /*
     * Funkcja odwraca tablice
     * @param obj referencja do objektu zawierającego tablice
     */
    void transform(BitmapExt& obj);
};

#endif
