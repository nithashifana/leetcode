int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

    int m ;
    if(nums1Size < nums2Size )
    m = nums1Size ;
    else m = nums2Size;
    int* A = (int*)malloc(m * sizeof(int));

    qsort(nums1, nums1Size, sizeof(int), compare);
    qsort(nums2, nums2Size, sizeof(int), compare);

    int i = 0, j = 0, k = 0;

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else {
            A[k++] = nums1[i];
            i++;
            j++;
        }
    }
    *returnSize = k;

    return A;
}