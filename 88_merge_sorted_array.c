void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int idx1 = m - 1; // first array end
    int idx2 = n - 1; // second array end
    int idx = m + n - 1; // resulting array ptr

    while (idx1 >= 0 && idx2 >= 0) {
        if (nums1[idx1] >= nums2[idx2]) {
            nums1[idx--] = nums1[idx1--];
        } else {
            nums1[idx--] = nums2[idx2--];
        }
    }
    while (idx2 >= 0) {
        nums1[idx--] = nums2[idx2--];
    }
}