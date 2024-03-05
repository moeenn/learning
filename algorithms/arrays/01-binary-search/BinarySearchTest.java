package com.sandbox;

import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import org.junit.jupiter.api.Test;

public class BinarySearchTest {
  private static ArrayList<Integer> numbers = new ArrayList<>(Arrays.asList( 1, 3, 9, 10, 12 ));

  @Test
  public void testSearchTargetNotFound() {
    int idx = BinarySearch.search(numbers, 100);
    assertEquals(idx, -1);
  }

  @Test
  public void testSearchTargetInUpperHalf() {
    int idx = BinarySearch.search(numbers, 10);
    assertEquals(idx, 3);
  }

  @Test
  public void testSearchTargetInLowerHalf() {
    int idx = BinarySearch.search(numbers, 1);
    assertEquals(idx, 0);
  }

  @Test
  public void testSearchTargetInMiddle() {
    int idx = BinarySearch.search(numbers, 9);
    assertEquals(idx, 2);
  }

  @Test
  public void testSearchEvenNumbers() {
    List<Integer> nums = new ArrayList<>(Arrays.asList(1, 10, 20, 47, 59, 63, 75, 88, 99 ));
    int idx = BinarySearch.search(nums, 47);
    assertEquals(idx, 3);
  }
}
