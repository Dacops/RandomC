#include <stdio.h>
#include <stdlib.h>
#include "sortalgs.h"


void bubble_sort(int array[])
{
    int i, j;

    for (i=0; i<DIM; i++)
    {
        for (j=0; j<DIM-1; j++)
        {
            if (array[j]>array[j+1])
            {
                exch(array, j, j+1);
            }
        }
    }
}


int main()
{
    int array[DIM];

    create_array(array);
    bubble_sort(array);
    print_array(array);
    return 0;
}