/******************************************************************

# Problem Statement:
Given an integer `num` and an integer `k`, find the k-th largest unique digit in
`num`. If there are fewer than `k` unique digits, return `-1`.

# Example :

Case 1:
Input:
    num = 417829
    k = 3
Output: 7
Explanation:
    - digits in `num`: 4, 1, 7, 8, 2, 9
    - The 3rd largest digit is 7


Case 2 :
Input:
    num = 1234
    k = 5
Output:
    -1
Explanation:
    - Digits in `num`: 1, 2, 3, 4
    - Since there are only 4 unique digits, k = 5 is invalid, so return -1


Case 3 :
Input:
    num = 99218834
    k = 4
Output: 3
Explanation:
    - digits in `num`: 9, 9, 2, 1, 8, 8, 3, 4
    - Unique digits in `num`: 9, 2, 1, 8, 3, 4
    - The 4th largest unique digit is 3

******************************************************************/

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int kthLargestDigit(int n, int k) {
  string s = to_string(n);
  int result = -1;

  sort(s.rbegin(), s.rend());
  s.erase(unique(s.begin(), s.end()), s.end());

  if (k - 1 < s.size()) {
    result = s[k - 1] - '0';
  }
  return result;
}

int main() {
  // Test Case 1
  int num1 = 417829;
  int k1 = 3;
  cout << "Input: num = " << num1 << ", k = " << k1 << endl;
  cout << "Output: " << kthLargestDigit(num1, k1) << endl;

  // Test Case 2
  int num2 = 1234;
  int k2 = 5;
  cout << "Input: num = " << num2 << ", k = " << k2 << endl;
  cout << "Output: " << kthLargestDigit(num2, k2) << endl;

  // Test Case 3 (With Repeated Digits)
  int num3 = 99218834;
  int k3 = 4;
  cout << "Input: num = " << num3 << ", k = " << k3 << endl;
  cout << "Output: " << kthLargestDigit(num3, k3) << endl;

  return 0;
}














//  # Optimized Approach Solution
//  Instead of using string, we can directly use an integer array to store digit
//  frequencies, avoiding sort().

/*****

#include <iostream>
using namespace std;

int kthLargestDigit(int n, int k) {
    bool seen[10] = {false};  // Store unique digits (0-9)

    while (n) {
        seen[n % 10] = true;  // Mark digit as present
        n /= 10;
    }

    // Traverse digits in descending order
    for (int digit = 9; digit >= 0; digit--) {
        if (seen[digit]) {
            k--;
            if (k == 0) return digit;
        }
    }
    return -1;  // k is invalid
}

int main() {
    cout << kthLargestDigit(417829, 3) << endl;  // Output: 7
    cout << kthLargestDigit(987654, 2) << endl;  // Output: 8
    cout << kthLargestDigit(99218834, 4) << endl; // Output: 2
    return 0;
}


*****/
