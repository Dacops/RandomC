#include <stdio.h>
#include <stdlib.h>
#include "sortalgs.h"


void insertion_sort(int array[])
{
    int i, j, temp;

    for (i=0; i<DIM; i++) 
    {
        if (array[i]<array[0])
        {
            temp=array[i];
            shift(array, 0, i);
            array[0]=temp;
        }
        
        else
        {
            for (j=i-1; j>=0; j--)
            {
                if (array[i]>array[j])
                {
                    temp=array[i];
                    shift(array, j, i);
                    array[j+1]=temp;
                    break;
                }
            }
        }
    }
}


int main()
{
    int array[DIM];

    create_array(array);
    insertion_sort(array);
    print_array(array);
    return 0;
}