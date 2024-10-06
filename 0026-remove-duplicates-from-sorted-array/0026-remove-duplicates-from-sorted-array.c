int removeDuplicates(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            continue;
        } else if (nums[i] == nums[i + 1]) {
            while (nums[i] == nums[i + 1] && i < numsSize - 1) {
                for (int j = i + 1; j < numsSize - 1; j++) {
                    nums[j] = nums[j + 1];
                }
                numsSize--;
            }
        }
    }

    return numsSize;
}