#include"matrixop.h"
void MTranspose(float* matrixA, float* result)
{
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[j * 3 + i] = matrixA[i * 3 + j];
        }
    }
}