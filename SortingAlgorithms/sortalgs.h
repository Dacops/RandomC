/* Defines and aux functions for the algorithms */

#include <stdio.h>
#include <stdlib.h>

#define DIM 20      /* dimension of the vector      */
#define VAL 100     /* max allowed value in vector  */


void create_array(int array[])
{
    int i;
    for (i=0; i<DIM; i++)
    {
        array[i] = rand()%VAL;
    }
}


void print_array(int array[])
{
    int i;
    for (i=0; i<DIM; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


void shift(int array[], int from, int till)
{
    int i;
    for (i=0; i<till-from; i++)
    {
        array[till-i]=array[till-(i+1)];
    }
}


void exch(int array[], int pos1, int pos2)
{
    int temp;

    temp=array[pos1];
    array[pos1]=array[pos2];
    array[pos2]=temp;
}