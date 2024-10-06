void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void heapify(int* H, int n, int i) {
    int large = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && H[large] < H[l])
        large = l;
    if (r < n && H[large] < H[r])
        large = r;
    if (large != i) {
        swap(&H[i], &H[large]);
        heapify(H, n, large);
    }
}

void build(int* H, int n) { 
    for (int i = n/2 -1 ;i >=0; i --){
        heapify(H, n, i);
    } }

int ex(int* H, int* n) {
    int lar = H[0];
    H[0] = H[*n - 1];
    (*n)--;
    heapify(H, *n, 0);
    return lar;
}
int findKthLargest(int* H, int n, int k) {
    int lar;
    build(H, n);
    for (int i = 0; i < k; i++) {
        lar = ex(H, &n);
    }
    return lar;
}