/*******************************************************************************
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct
ways can you climb to the top?

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

*******************************************************************************/

int climbStairs(int n) {
  int a = 2, b = 3, r;
  if (n < 4) {
    r = n;
  }

  if (n >= 4) {
    for (int i = 0; i < n - 3; i++) {
      r = a + b;
      a = b;
      b = r;
    }
  }

  return r;
}
