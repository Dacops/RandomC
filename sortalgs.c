#include <stdio.h>
#include <stdlib.h>

#define DIM 20
#define VAL 100


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


/* Selection sort */
void select_sort(int array[])
{
    int i, j;

    for (i=0; i<DIM; i++)
    {
        int min=VAL+1, index, temp;
        for (j=i; j<DIM; j++)
        {
            if (min>VAL) min=array[j], index=j;
            if (min>array[j]) min=array[j], index=j;
        }
        temp=array[i];
        array[i]=min;
        array[index]=temp;
    }
}


/* Insertion sort */
void shift(int array[], int from, int till)
    {
        int i;
        for (i=0; i<till-from; i++)
        {
            array[till-i]=array[till-(i+1)];
        }
    }

void insert_sort(int array[])
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


/* Bubble sort */
void bubble_sort(int array[])
{
    int i, j, temp;

    for (i=0; i<DIM; i++)
    {
        for (j=0; j<DIM-1; j++)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}


int main()
{
    int array[DIM];

    create_array(array);
    select_sort(array);
    insert_sort(array);
    bubble_sort(array);
    print_array(array);
    return 0;
}