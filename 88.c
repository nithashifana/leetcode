// Merge sorted array
// MEDIUM

#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int mn[m + n];
    int i = 0, j = 0, pos = 0;
    while (i < m && j < n) {
        if (nums1[i] > nums2[j]) {
            mn[pos] = nums2[j];
            j ++;
        } else {
            mn[pos] = nums1[i];
            i ++;
        }
        pos ++;
    }
    
    while (i == m && j < n) {
        for(int k = pos; k < m + n; k ++) {
            mn[pos] = nums2[j];
            j ++;
            pos ++;
        }
    }

    while (j == n && i < m) {
        for(int k = pos; k < m + n; k ++) {
            mn[pos] = nums1[i];
            i ++;
            pos ++;
        }
    }

    for(int p = 0; p < m + n; p ++) {
        nums1[p] = mn[p];
    }
}
