
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < i; j++) {
            swap(&matrix[i][j], &matrix[j][i]);
        }
    }
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize / 2; j++) {
            swap(&matrix[i][j], &matrix[i][matrixSize - 1 - j]);
        }
    }
}