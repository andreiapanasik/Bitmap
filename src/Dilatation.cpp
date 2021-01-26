#include "Dilatation.h"

void Dilatation::transform(BitmapExt& obj)
{
    obj.fillNeighb();
    for (int i = 0; i < obj.lenght(); i++)
        for (int j = 0; j < obj.weight(); j++)
        {
            if (obj.array[i][j].val == 0 && obj.countBlackNeighb(i, j) != 0)
                obj.array[i][j].val = 1;
        }
}
