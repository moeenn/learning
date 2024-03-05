package com.sandbox;

import java.util.Arrays;
import java.util.List;

public class RotateArray {
  public static int newIndex(int length, int idx, int rotate) {
    if (rotate == 0) return idx;
 
    int n = (idx + rotate);
    if (rotate < 0) {
       return (n < 0) ? length + n : n;
    }

    // rotate is positive
    return (n >= length) ? n - length : n; 
  }  

  public static List<Integer> rotate(List<Integer> numbers, int rotate) {
    List<Integer> result = Arrays.asList(new Integer[numbers.size()]);
    int i, idx;

    for (i = 0; i < numbers.size(); i++) {
      idx = RotateArray.newIndex(numbers.size(), i, rotate);
      result.set(idx, numbers.get(i));
    }

    return result;
  }
}
