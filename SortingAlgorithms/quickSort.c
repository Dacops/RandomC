#include <stdio.h>
#include <stdlib.h>
#include "sortalgs.h"


void quick_sort(int array[], int begin, int end)
{
    int i, j, comp;

    comp = array[end];
    i = begin - 1;
    j = end;

    while (i<j)
    {
        while (array[++i]<comp); /*doesn't need break condition, last element = comp, !>comp */
        while (array[--j]>comp)  /*++x increments before verifying condition, x++ otherwise  */
            if (j==begin)
                break;

        if (i<j)
        {
            exch(array, i, j);
        }
    }
    if (i!=end)
    {
        exch(array, i, end);
        quick_sort(array, begin, i-1);
        quick_sort(array, i+1, end);
    }
    if (j!=end)
    {
        quick_sort(array, begin, end-1);
    }
}


int main()
{
    int array[DIM];

    create_array(array);
    quick_sort(array, 0, DIM-1);
    print_array(array);
    return 0;
}
