#include"matrixop.h"
void MAdd(float* matrixA, float* matrixB, float* result)
{
    int i = 0;
    for (i = 0; i < 9; i++) {
        result[i] = matrixA[i] + matrixB[i];
    }
}