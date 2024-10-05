// Rotate array
// MEDIUM

#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b =t;
}

void rotate(int* A, int n, int k) {
    k = k % n;
    int i = 0, j = n - 1 - k;
    while (i < j) {
        swap(&A[i], &A[j]);
        i ++;
        j --;
    }
    i = n - k; j = n-1;
    while (i < j) {
        swap(&A[i], &A[j]);
        i ++;
        j --;
    }
    i = 0; j = n - 1;
    while (i < j) {
        swap(&A[i], &A[j]);
        i ++;
        j --;
    }
}