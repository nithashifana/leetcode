void zero(int** matrix, int matrixSize, int* matrixColSize, int i, int j) {
    for(int k = 0; k < matrixColSize[i]; k ++) {
        if(matrix[i][k] != 0)
        matrix[i][k] = 10000;
    }
    for(int k = 0; k < matrixSize; k ++) {
        if(matrix[k][j] != 0)
        matrix[k][j] = 10000;
    }
}

void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    for(int i = 0; i < matrixSize; i++) {
        for(int j = 0; j < matrixColSize[i]; j ++) {
            if(matrix[i][j] == 0) {
                zero(matrix, matrixSize, matrixColSize, i, j);
            }
        }
    }
    for(int i = 0; i < matrixSize; i++) {
        for(int j = 0; j < matrixColSize[i]; j ++) {
            if(matrix[i][j] == 10000)
            matrix[i][j] = 0;
        }
    }
}