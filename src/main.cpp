#include "Inversion.h"
#include "Erosion.h"
#include "Dilatation.h"
#include "Averaging.h"
#include "AdditionTransformations.h"

int main(int argc, const char * argv[])
{
    BitmapExt aa(5, 5);
    int choise, n = 1;
    aa(1, 1) = aa(2, 1) = aa(3, 1) = aa(2, 2) = aa(1, 3) = aa(2, 3) = aa(3, 3) = 1;
    cout << aa;
    cout << endl;
    
    AdditionTransformations z;
    while(n) 
    {
        cout << "Dodaj metodę transformacji:\n1 - Uśrednienie\n2 - Dylatacja\n3 - Erozja\n4 - Inwersja\n5 - Transformuj" << endl;
        cin >> choise;
        switch (choise)
        {
            case 1: {
                Averaging u;
                z.addTransformation(&u);
                break;}
            case 2:{
                Dilatation d;
                z.addTransformation(&d);
                break;}

            case 3:{
                Erosion e;
                z.addTransformation(&e);
                break;}

            case 4:{
                Inversion i;
                z.addTransformation(&i);
                break;}

            case 5:{
                z.transform(aa);
                cout << aa;
                cout << endl; 
                n = 0;
                break;}
            
            default:{
                n = 0;
                break;}
        }
    }
    return 0;
}
