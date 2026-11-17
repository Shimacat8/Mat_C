void MTranspose(float* matrixA, float* result);
void MAdd(float* matrixA, float* matrixB, float* result);
void MMultiply(float* matrixA, float* matrixB, float* result);
void MElementWiseMultiply(float* matrixA, float* matrixB, float* result);
void MDet2x2(float* matrixA, float* result);
void MDet3x3(float* matrixA, float* result);
void MAdjoint3x3(float* matrixA, float* result);
void MInverse3x3(float* matrixA, float* result);
void MPseudoInverse3x3(float* matrixA, float* result);