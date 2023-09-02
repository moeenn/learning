#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

int binary_search(int nums[], int len, int target) {
  int low, mid, high;

  low = 0;
  high = len - 1;

  while (low < high) {
    mid = high - low / 2;

    if (target == nums[low])
      return low;
    if (target == nums[mid])
      return mid;
    if (target == nums[high])
      return high;

    if (target < nums[mid]) {
      high = mid - 1;
    }

    if (target > nums[mid]) {
      low = mid + 1;
    }
  }

  return -1;
}

int main() {
  int nums[] = {1, 3, 9, 10, 12, 13};

  int len = sizeof(nums) / sizeof(nums[0]);

  assert(binary_search(nums, len, 9) == 2);
  assert(binary_search(nums, len, 3) == 1);
  assert(binary_search(nums, len, 12) == 4);
  assert(binary_search(nums, len, 11) == -1);

  int nums_two[] = {1, 10, 20, 47, 59, 63, 75, 88, 99};
  len = sizeof(nums) / sizeof(nums[0]);
  int idx = binary_search(nums_two, len, 70);
  assert(idx == -1);

  printf("success!\n");
  return 0;
}