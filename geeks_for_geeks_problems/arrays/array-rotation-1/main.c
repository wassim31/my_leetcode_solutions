#include <stdlib.h>
#include <stdio.h>
#define N 7
void rotate(int *array,int d);
void print(int *array)
{
    for(int i = 0 ; i < N ; i++)
        printf("%d ", *(array+i));
}
int main(int argc, char const *argv[])
{
    int array[N] = {1,2,3,4,5,6,7};
    print(array); // print before processing
    rotate(array,2);
    printf("\nAfter: ");
    print(array);


    return 0;
}
void rotate(int *array,int d)
{
    int i,j,k;
    int test[d];
    for(j = 0 ; j < d ; j++)
    {
        test[j] = array[j];
    }
    j = 0;
    for(i = 0, k = d ; i < N ; i++)
    {
        if(i >= N-d)
        {   
            array[i] = test[j];
            j++;
        }
        else
        {
            array[i] = array[k];
            k++;
        }
    }
}