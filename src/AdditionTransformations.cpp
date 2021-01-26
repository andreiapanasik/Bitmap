#include "AdditionTransformations.h"

void AdditionTransformations::transform(BitmapExt& obj)
{
    for (int i = 0; i < vec.size(); i++)
        vec[i]->transform(obj);
}

void AdditionTransformations::addTransformation(Transformation * p)
{
    vec.push_back(p);
}
