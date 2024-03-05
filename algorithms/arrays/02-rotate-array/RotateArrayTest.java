package com.sandbox;

import static org.junit.jupiter.api.Assertions.assertArrayEquals;
import static org.junit.jupiter.api.Assertions.assertEquals;

import java.util.Arrays;
import java.util.List;

import org.junit.jupiter.api.Test;

public class RotateArrayTest {
  
  @Test
  public void testNewIndexForwardRotate() {
    int result = RotateArray.newIndex(5, 1, 2);
    assertEquals(result, 3);
  }

  @Test
  public void testNewIndexBackwardsRotate() {
    int result = RotateArray.newIndex(5, 4, -4);
    assertEquals(result, 0);
  }  

  @Test
  public void testNewIndexForwardRotateWrap() {
    int result = RotateArray.newIndex(5, 3, 3);
    assertEquals(result, 1);
  }

  @Test
  public void testNewIndexBackwardsRotateWrap() {
    int result = RotateArray.newIndex(5, 1, -2);
    assertEquals(result, 4);
  }

  @Test
  public void testRotateArray() {
    List<Integer> input = Arrays.asList(1, 10, 20, 0, 59, 86, 32, 11, 9, 40);

    List<Integer> expectedMinusOne = Arrays.asList(10, 20, 0, 59, 86, 32, 11, 9, 40, 1);
    assertEquals(expectedMinusOne, RotateArray.rotate(input, -1));

    List<Integer> expectedPositiveTwo = Arrays.asList(9, 40,1, 10, 20, 0, 59, 86, 32, 11);
    assertEquals(expectedPositiveTwo, RotateArray.rotate(input, 2));
  }
}
