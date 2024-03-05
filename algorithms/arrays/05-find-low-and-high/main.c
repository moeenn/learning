#include <assert.h>
#include <stdio.h>

#define LEN(arr) sizeof(arr) / sizeof(arr[0])

typedef struct {
  int low;
  int high;
} LowHigh;

void show_low_high(LowHigh lh) {
  printf("LowHigh(low=%d, high=%d)\n", lh.low, lh.high);
}

int find_low(int nums[], int len, int target) {
  int i;
  for (i = 0; i < len; i++) {
    if (nums[i] == target) {
      return i;
    }
  }
  return -1;
}

int find_high(int nums[], int len, int target) {
  int i;
  for (i = len-1; i >= 0; i--) {
    if (nums[i] == target) {
      return i;
    }
  }
  return -1;
}

LowHigh find_low_high(int nums[], int len, int target) {
  LowHigh r = { 
    .low = find_low(nums, len, target), 
    .high = find_high(nums, len, target), 
  };

  return r;
}

int main() {
  int nums[] = {1, 2, 5, 5, 5, 5, 5, 5, 5, 5, 20};

  LowHigh result = find_low_high(nums, LEN(nums), 5);
  show_low_high(result);

  assert(result.low == 2);
  assert(result.high == 9);

  printf("\nsuccess!\n");
  return 0;
}