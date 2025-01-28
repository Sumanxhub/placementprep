#include <iostream>
using namespace std;

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

int main() {
  // Test Case 1
  int num1 = 4;
  cout << "Number of Stairs: " << num1 << endl;
  cout << "Possible ways to climb stairs: " << climbStairs(num1) << endl;

  // Test Case 2
  int num2 = 8;
  cout << "\nNumber of Stairs: " << num2 << endl;
  cout << "Possible ways to climb stairs: " << climbStairs(num2) << endl;

  // Test Case 3
  int num3 = 2;
  cout << "\nNumber of Stairs: " << num3 << endl;
  cout << "Possible ways to climb stairs: " << climbStairs(num3) << endl;

  return 0;
}
