#ifndef Transformation_h
#define Transformation_h
#include "BitmapExt.h"
class Transformation
{
public:
    virtual void transform(BitmapExt&) = 0;
};

#endif
