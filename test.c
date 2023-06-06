#include <stdio.h>

int main()
{
    double num = 3;
    double* ptr = &num;
    double** dptr = &ptr;
    double*** tptr = &dptr;

    printf("\n abcd~~ abcd~~~ 0x%02X \n", *(double **)dptr);

    //int aList[10] = {1,2,3,4,5,6,7,8,9,10};
    return 0;
}