#include "Averaging.h"

void Averaging::transform(BitmapExt& obj)
{
    obj.fillNeighb();
    for (int i = 0; i < obj.lenght(); i++)
        for (int j = 0; j < obj.weight(); j++)
        {
            if (obj.countBlackNeighb(i, j) > 2)
                obj.array[i][j].val = 1;
            if (obj.countWhiteNeighb(i, j) > 2)
                obj.array[i][j].val = 0;
        }
}
