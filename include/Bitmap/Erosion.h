#ifndef Erosion_h
#define Erosion_h
#include "Transformation.h"


class Erosion : public Transformation
{
public:
    /*
     * Funkcja tworze erozje tablicy
     * @param obj referencja do objektu zawierającego tablice
     */
    void transform(BitmapExt& obj);
};

#endif
