#ifndef AdditionTransformations_h
#define AdditionTransformations_h
#include "Transformation.h"
#include <vector>

class AdditionTransformations : public Transformation
{
    vector<Transformation*> vec;
public:
    
    /*
     * Funkcja wykonuje po koleje podane przekształcenia
     * @param obj referencja do objektu zawierającego tablice
     */
    void transform(BitmapExt& obj);
    
    /*
     * Funkcja dodaje przekształcenie do wektora
     * @param p wskaźnik do objektu klasy od której pochodzą wszystkie przekształcenia
     */
    void addTransformation(Transformation * p);
};

#endif
