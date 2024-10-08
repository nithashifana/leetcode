int majorityElement(int* A, int n) {

    int count = 0, res;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            res = A[i];
        }
        count += res == A[i] ? 1 : -1;
    }
    return res;
}