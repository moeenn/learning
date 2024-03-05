package com.sandbox;

import java.util.List;

public class BinarySearch {
  public static int search(List<Integer> numbers, int target) {
    int low = 0;
    int high = numbers.size() - 1;
    int mid = 0;
    int midNum = 0;

    do {
      mid = low + ((high - low) / 2);
      midNum = numbers.get(mid);

      if (target == midNum) {
        return mid;
      }

      if (target < midNum) {
        high = mid - 1;
        // continue;
      }

      if (target > midNum) {
        low = mid + 1;
        // continue;
      }
    } while (low <= high);

    return -1;
  }
}
