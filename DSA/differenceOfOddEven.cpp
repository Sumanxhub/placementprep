/******************************************************************

#Problem Statement
Given a number as an integer (e.g., 257834),
extract all odd and even digits separately and form two new numbers.
Then, return the absolute difference between these two numbers.

#Example:

Case 1:
Input: 257834
Output: 289
Explanation:
    Extract odd digits: 5, 7, 3 → Form the number 573
    Extract even digits: 2, 8, 4 → Form the number 284
    Compute absolute difference: |573 - 284| = 289

Case 2:
Input: 8642
Output: 8642
Explanation:
    Odd digits: None
    Even digits: 8642 → Form the number 8642
    Compute absolute difference: |0 - 8642| = 8642
******************************************************************/

#include <iostream>
using namespace std;

int diffOfOddEven(int n) {
  int evenNum = 0, oddNum = 0, oddMultiplier = 1, evenMultiplier = 1;

  while (n > 0) {
    int digit = n % 10;

    if (digit % 2 == 0) {
      evenNum = evenNum + digit * evenMultiplier;
      evenMultiplier *= 10;
    } else {
      oddNum = oddNum + digit * oddMultiplier;
      oddMultiplier *= 10;
    }

    n /= 10;
  }

  return abs(oddNum - evenNum);
}

int main() {

  int num = 32154;

  cout << "number: " << num << endl;
  cout << "Result: " << diffOfOddEven(num) << endl;

  return 0;
}

// below code is correct but has a potential issue like If all digits are even
// or all digits are Odd then it cause runtime error

/*

#include <iostream>
#include <string>
using namespace std;

int diffofOddEven(int n) {
  string s = to_string(n);
  string even, odd;
  int result;

  for (auto i : s) {
    if ((i - '0') % 2 == 0) {
      even += i;
    } else {
      odd += i;
    }
  }

  result = abs((stoi(even) - (stoi(odd))));

  return result;
}

int main() {
  int num = 257384;
  cout << "number: " << num << endl;
  cout << "Result: " << diffofOddEven(num) << endl;

  return 0;
}

*/
