#ifndef Averaging_h
#define Averaging_h
#include "Transformation.h"

class Averaging : public Transformation
{
public:
    /*
     * Funkcja tworze usrednianie tablicy
     * @param obj referencja do objektu zawierającego tablice
     */
    void transform(BitmapExt& obj);
};

#endif
