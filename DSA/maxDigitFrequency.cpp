/******************************************************************
# Problem Statement
Given an integer n, find the digit that occurs the most times in n.
If multiple digits have the same highest frequency, return the
largest digit among them.

# Example:

Case 1:
Input: 123110
Output: Digit: 1, Count: 3
Explanation:
    Digits in 123110: {1, 2, 3, 1, 1, 0}
    Frequency:
        0 → 1 time
        1 → 3 times (max)
        2 → 1 time
        3 → 1 time
    Highest occurring digit: 1, appearing 3 times.

Case 2:
Input: 998877
Output: Digit: 9, Count: 2
Explanation:
    Digits in  998877: {9, 9, 8, 8, 7, 7}
    Frequency:
        9 → 2 time
        8 → 2 time
        7 → 2 time
    All digits appear twice, but the largest
    digit 9 is returned.

******************************************************************/

#include <iostream>
#include <map>
#include <utility>
using namespace std;

pair<int, int> maxDigitFrequency(int n) {
  map<int, int> m;
  while (n) {
    int r = n % 10;
    m[r]++;
    n /= 10;
  }

  int count = -1, digit = -1;

  for (auto k : m) {
    if (count <= k.second) {
      count = k.second;
      digit = k.first;
    }
  }
  return {digit, count};
}

int main() {
  // Test Case 1
  int n1 = 123110;
  auto result1 = maxDigitFrequency(n1);
  cout << "Input: " << n1 << endl;
  cout << "Output: Digit: " << result1.first << ", Count: " << result1.second
       << endl
       << endl;

  // Test Case 2
  int n2 = 99886655;
  auto result2 = maxDigitFrequency(n2);
  cout << "Input: " << n2 << endl;
  cout << "Output: Digit: " << result2.first << ", Count: " << result2.second
       << endl
       << endl;

  // Test Case 3
  int n3 = 555511155;
  auto result3 = maxDigitFrequency(n3);
  cout << "Input: " << n3 << endl;
  cout << "Output: Digit: " << result3.first << ", Count: " << result3.second
       << endl
       << endl;

  return 0;
}
