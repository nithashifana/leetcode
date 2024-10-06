// int removeElement(int* nums, int numsSize, int val) {
//     for (int i = 0; i < numsSize; i++) {
//         while (nums[i] == val) {
//             if (nums[numsSize - 1] != val) {
//                 nums[i] = nums[numsSize - 1];
//                 numsSize--;
//                 break;
//             } else {
//                 numsSize--;
//                 continue;
//             }
//         }
//     }
//     return numsSize;
// }

int removeElement(int* nums, int numsSize, int val) {
    for (int i = 0; i < numsSize; i++) {
        if(nums[i] == val) {
            if(nums[numsSize - 1] != val) {
                nums[i] = nums[numsSize - 1];
                numsSize --;
            }
            else {
                while (nums[numsSize - 1] == val && i < numsSize - 1) {
                numsSize --;
                }
                nums[i] = nums[numsSize - 1];
                numsSize --;
            }
        }
    }

    return numsSize;
}