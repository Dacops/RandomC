#include <stdio.h>
#include <stdlib.h>
#include "sortalgs.h"


void select_sort(int array[])
{
    int i, j;

    for (i=0; i<DIM; i++)
    {
        int min=VAL+1, index;
        for (j=i; j<DIM; j++)
        {
            if (min>VAL) min=array[j], index=j;
            if (min>array[j]) min=array[j], index=j;
        }
        exch(array, i, index);
    }
}


int main()
{
    int array[DIM];

    create_array(array);
    select_sort(array);
    print_array(array);
    return 0;
}