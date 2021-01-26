#include "Inversion.h"

void Inversion :: transform(BitmapExt& obj)
{
    obj.fillNeighb();
    for (int i = 0; i < obj.lenght(); i++)
        for (int j = 0; j < obj.weight(); j++)
        {
            if (obj.array[i][j].val == 0)
                obj.array[i][j].val = 1;
            else
                obj.array[i][j].val = 0;
        }
}
