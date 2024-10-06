int compare (const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

bool containsDuplicate(int* A, int numsSize) {
    qsort(A, numsSize, sizeof(int), compare);
    for (int i = 0; i < numsSize - 1; i ++) {
        if (A[i] == A[i+1])
        return true;
    }
    return false;
}