int compare (const void *a, const void *b) {
    int aa = *(int*)a;
    int bb = *(int*)b;

    if (aa < bb) return -1;
    else if (aa > bb) return 1;
    else return 0;
}
    
int singleNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    for (int i = 0; i < numsSize - 1; i += 3) {
        if (nums[i] != nums[i + 1]) {
            return nums[i];
        }
    }
    return nums[numsSize - 1];
} 
