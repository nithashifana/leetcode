int removeDuplicates(int* A, int n) {
    if (n > 2) {
        for (int i = 0; i < n - 2; i++) {
            if (A[i] != A[i + 2])
                continue;
            else if (A[i] == A[i + 2]) {
                for(int k = i; k < n-2; k ++) {
                A[k + 1] = A[k + 2];
                }n --;
                i --;
            }
        }
        return n;
    } else
        return n;
}