#ifndef Bitmapa_h
#define Bitmapa_h
#include "Pixel.h"
class Bitmap
{
public:
    virtual unsigned lenght() = 0;
    virtual unsigned weight() = 0;
    virtual unsigned& operator() (unsigned x, unsigned y) = 0;
    virtual ~Bitmap() {}
};


#endif
