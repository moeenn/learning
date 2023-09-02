#include <assert.h>
#include <stdio.h>

#define LEN(arr) sizeof(arr) / sizeof(arr[0])

int least_common_num(int arr1[], int len1, int arr2[], int len2, int arr3[],
                     int len3) {
  int i, j, k;

  for (i = 0; i < len1; i++) {
    for (j = 0; j < len2; j++) {
      for (k = 0; k < len3; k++) {
        if ((arr1[i] == arr2[j]) && (arr2[j] == arr3[k])) {
          return arr1[i];
        } 
      }
    }
  }

  return -1;
}

int main() {
  int arr1[] = {6, 7, 10, 25, 30, 63, 64};
  int arr2[] = {0, 4, 5, 6, 7, 8, 50};
  int arr3[] = {1, 6, 10, 14};

  int result =
      least_common_num(arr1, LEN(arr1), arr2, LEN(arr2), arr3, LEN(arr3));

  printf("result: %d\n", result);
  assert(result == 6);

  printf("\nsuccess!\n");
  return 0;
}