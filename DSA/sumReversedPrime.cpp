/******************************************************************

# Problem Statement
Given two integers a and b, find all prime numbers in the range [a, b].
For each prime number, reverse its digits and then sum up all the reversed
numbers.

# Example

Case 1:
Input: 7 20
Output: 211
Explanation:
    Prime numbers in range [7, 20] → {7, 11, 13, 17, 19}
    Reverse each prime number:
        7 → 7
        11 → 11
        13 → 31
        17 → 71
        19 → 91
Sum of reversed primes: 7 + 11 + 31 + 71 + 91 = 211


Case 2:
Input: 10 30
Output: 260
Explanation:
    Prime numbers in range [10, 30] → {11, 13, 17, 19, 23, 29}
    Reverse each prime number:
        11 → 11
        13 → 31
        17 → 71
        19 → 91
        23 → 32
        29 → 92
Sum of reversed primes: 11 + 31 + 71 + 91 + 32 + 92 = 260

******************************************************************/

#include <iostream>
using namespace std;

int prime(int n) {
  if (n < 2)
    return 0;

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int reverse(int n) {
  string s = "";

  while (n) {
    int r = n % 10;
    s += to_string(r);
    n /= 10;
  }
  return stoi(s);
}

int sumReversedPrime(int a, int b) {
  int sum = 0;
  for (int i = a; i <= b; i++) {
    if (prime(i))
      sum += reverse(i);
  }
  return sum;
}

int main() {
  // Test Case 1
  int a1 = 7, b1 = 20;
  cout << "Input: " << a1 << " " << b1 << endl;
  cout << "Output: " << sumReversedPrime(a1, b1) << endl << endl;

  // Test Case 2
  int a2 = 10, b2 = 30;
  cout << "Input: " << a2 << " " << b2 << endl;
  cout << "Output: " << sumReversedPrime(a2, b2) << endl << endl;

  // Test Case 3
  int a3 = 1, b3 = 50;
  cout << "Input: " << a3 << " " << b3 << endl;
  cout << "Output: " << sumReversedPrime(a3, b3) << endl << endl;

  return 0;
}
