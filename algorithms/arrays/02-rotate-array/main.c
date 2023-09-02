#include <assert.h>
#include <stdio.h>

void rotate_array(int nums[], int len, int n) {
  int copy[len], i, idx;
  n = n % len;

  for (i = 0; i < len; i++) {
    idx = i + n;

    if (idx < 0) {
      idx = len + idx;
    } else if (idx > (len - 1)) {
      idx = idx - len;
    }

    copy[idx] = nums[i];
  }

  for (i = 0; i < len; i++) {
    nums[i] = copy[i];
  }
}

int main() {
  int nums[] = {1, 10, 20, 0, 59, 86, 32, 11, 9, 40};
  int len = sizeof(nums) / sizeof(nums[0]);

  rotate_array(nums, len, -1);
  assert(nums[0] == 10);
  assert(nums[len - 1] == 1);
  assert(nums[1] == 20);

  for (int i = 0; i < len; i++) {
    printf("%d\t", nums[i]);
  }

  printf("\nsuccess!\n");
  return 0;
}