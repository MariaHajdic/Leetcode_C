#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
    int target = numsSize - 1;
    for (int i = target; i >= 0; i--) {
        if (nums[i] + i >= target) target = i;
    }
    return !target;
}