/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    *returnSize = n + 1;
    int* ans = malloc((n+1) * sizeof(int));

    for (int i = 0; i <= n; i++) {
        ans[i] = weight(i);
    }

    return ans;
}

int weight(int n) {
    int weight = 0;

    while (n > 0) {
        weight += n & 1;
        n >>= 1;
    }

    return weight;
}