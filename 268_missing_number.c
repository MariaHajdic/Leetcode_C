int missingNumber(int* nums, int numsSize) {
    int i = 0, res = 0;

    while (i < numsSize) {
        res ^= nums[i];
        res ^= i++;
    }

    return res ^= i;
}