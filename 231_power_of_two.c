#include <stdbool.h>

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;

    int ones = 0;

    while (n > 0) {
        if (n & 1 && ones) {
            return false;
        }
        ones |= n & 1;
        n >>= 1;
    }

    return true;
}
