void MTranspose(float* matrixA, float* result);
void Madd(float* matrixA, float* matrixB, float* result);
void MMultiply(float* matrixA, float* matrixB, float* result);
void MElementWiseMultiply(float* matrixA, float* matrixB, float* result);
void Mdet2x2(float* matrixA, float* result);
void Mdet3x3(float* matrixA, float* result);
void Madjoint3x3(float* matrixA, float* result);
void Minverse3x3(float* matrixA, float* result);
void MpseudoInverse3x3(float* matrixA, float* result);