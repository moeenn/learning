#include <assert.h>
#include <stdio.h>

#define LEN(arr) sizeof(arr) / sizeof(arr[0])

void copy_array(int src[], int target[], int len) {
  int i;
  for (i = 0; i < len; i++) {
    target[i] = src[i];
  }
}

void move_zeros_to_left(int nums[], int len) {
  int copy[len], i, j;

  j = 0;
  for (i = 0; i < len; i++) {
    if (nums[i] == 0) {
      copy[j++] = 0;
    }
  }

  for (i = 0; i < len; i++) {
    if (nums[i] == 0) {
      continue;
    } else {
      copy[j++] = nums[i];
    }
  }

  copy_array(copy, nums, len);
}

int main() {
  int nums[] = {1, 10, 20, 0, 59, 63, 0, 88, 0};
  move_zeros_to_left(nums, LEN(nums));

  for (int i = 0; i < LEN(nums); i++) {
    printf("%d, ", nums[i]);
  }

  printf("\nsuccess!\n");
  return 0;
}