#include "BitmapExt.h"

unsigned& BitmapExt::operator() (unsigned x, unsigned y)
{
    return array[x][y].val;
}

BitmapExt :: BitmapExt(unsigned x, unsigned y)
{
    length = x;
    weigh = y;
    array = new Pixel*[length];
    for (int i = 0; i < length; i++)
    {
        array[i] = new Pixel[weigh];
        for (int j = 0; j < weigh; j++)
            array[i][j].val = 0;
    }
}

unsigned BitmapExt::lenght()
{
    return this->length;
}

unsigned BitmapExt::weight()
{
    return this->weigh;
}

void BitmapExt::fillNeighb()
{
    for (int i = 0; i < length; i++)
        for (int j = 0; j < weigh; j++)
        {
            if (i > 0)
                this->array[i][j].top = this->array[i-1][j].val;
            else
                this->array[i][j].top = NULL;
            if (i < length - 1)
                this->array[i][j].down = this->array[i+1][j].val;
            else
                this->array[i][j].down = NULL;
            if (j > 0)
                this->array[i][j].left = this->array[i][j-1].val;
            else
                this->array[i][j].left = NULL;
            if (j < length - 1)
                this->array[i][j].right = this->array[i][j+1].val;
            else
                this->array[i][j].right = NULL;
        }
}

unsigned BitmapExt::countWhiteNeighb(int i, int j)
{
    unsigned count = 0;
    if (this->array[i][j].top == 0)
        count++;
    if (this->array[i][j].down == 0)
        count++;
    if (this->array[i][j].right == 0)
        count++;
    if (this->array[i][j].left == 0)
        count++;
    return count;
}

unsigned BitmapExt::countBlackNeighb(int i, int j)
{
    unsigned count = 0;
    if (this->array[i][j].top == 1)
        count++;
    if (this->array[i][j].down == 1)
        count++;
    if (this->array[i][j].right == 1)
        count++;
    if (this->array[i][j].left == 1)
        count++;
    return count;
}

void operator<<(ostream & cout, BitmapExt & aa)
{
    
    for (int i = 0; i < aa.lenght(); i++)
    {
        for (int j = 0; j < aa.weight(); j++)
            cout << aa.array[i][j].val << " ";
        cout << endl;
    }
    
}

BitmapExt::~BitmapExt()
{
    for (int i = 0; i < length; i++)
    {
        delete [] array[i];
        
    }
    delete array;
}
