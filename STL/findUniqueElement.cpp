/******************************************************************

# Problem Statement

Given an array of integers where every element appears twice except for one
unique element, find and return the unique element that appears only once.
You must solve it in O(n) time and O(1) extra space using bitwise operations.

#Example:

Case 1:
Input: [1, 2, 5, 2, 1]
Output: 5
Explanation:
    The numbers 1 and 2 appear twice.
    The number 5 appears only once, so it is the answer.

Case 2:
Input: [4, 3, 2, 4, 2]
Output: 3
Explanation:
    4 and 2 appear twice.
    3 is the unique number.

Case 3:
Input: [9]
Output: 9
Explanation:
    There is only one element in the array, so it is the answer.

******************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(vector<int> v) {
  int x = 0;

  for (auto i : v) {
    x ^= i;
  }

  return x;
}

int main() {
  int n = 5;
  vector<int> p(n);

  // Case1
  p = {1, 2, 5, 2, 1};
  cout << findUniqueElement(p) << endl;

  // Case2
  p = {7, 4, 6, 7, 6};
  cout << findUniqueElement(p) << endl;

  // Case3
  p = {8};
  cout << findUniqueElement(p) << endl;

  return 0;
}
