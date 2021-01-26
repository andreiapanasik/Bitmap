#ifndef BitmapExt_h
#define BitmapExt_h
#include "Bitmap.h"
#include "Pixel.h"
#include <iostream>
using namespace std;

class BitmapExt : public Bitmap
{
    unsigned length;
    unsigned weigh;
public:
    Pixel ** array;
    
    /*
     * Konstruktor dla zadania rozmiaru bitmapy
     * @param x długość bitmapy
     * @param y szerokość bitmapy
     */
    BitmapExt(unsigned x, unsigned y);
    
    /*
     * Funkcja zwracająca długość bitmapy
     * @return długość bitmapy
     */
    unsigned lenght() override;
    
    /*
     * Funkcja zwracająca szerokość bitmapy
     * @return szerokość bitmapy
     */
    unsigned weight() override;
    
    /*
     * Funkcja dla zapisywania wartości sąsiadujących elementów
     */
    void fillNeighb();
    
    /*
     * Funkcja oblicza ilość białych sąsiadujących elementów dla podanego elementa
     * @param i numer wiersza sprawdzanego elementa
     * @param j numer kolumny sprawdzanego elementa
     * @return ilość białych sąsiadujących elementów
     */
    unsigned countWhiteNeighb(int i, int j);
    
    /*
     * Funkcja oblicza ilość czarnych sąsiadujących elementów dla podanego elementa
     * @param i numer wiersza sprawdzanego elementa
     * @param j numer kolumny sprawdzanego elementa
     * @return ilość czarnych sąsiadujących elementów
     */
    unsigned countBlackNeighb(int i, int j);
    
    /*
     * Funkcja przeładowania operatora "()" dla dostępa do elementów tablicy o podanych indeksach
     * @param x numer wiersza elementa
     * @param y numer kolumny elementa
     * @return referencja na objekt tablicy
     */
    unsigned& operator() (unsigned x, unsigned y) override;
    
    /*
     * Funkcja przeładowania operatora "<<" dla wyświetlenia tablicy
     * @param cout referencja do strumienia wyjścia
     * @param aa referencja do objektu zawierajacego tablicę
     */
    friend void operator<<(ostream & cout, BitmapExt & aa);
    
    /*
     * Destruktor dla wyzwolania pamięci
     */
    ~BitmapExt() override;
};

#endif
