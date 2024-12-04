/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int* A = (int*)malloc(2 * sizeof(int));
    int i = 0; int j = numbersSize - 1;
    while(i < j) {
        if(numbers[i] + numbers[j] == target) {
            A[0] = i + 1;
            A[1] = j + 1;
            *returnSize = 2;
            return A;
        }
        if(numbers[i] + numbers[j] > target) {
            j --;
        }
        if(numbers[j] + numbers[i] < target) {
            i ++;
        }
    }
    return A;
}