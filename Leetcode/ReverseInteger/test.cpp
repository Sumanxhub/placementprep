#include <climits>
#include <iostream>
using namespace std;

int reverse(int x) {
  int rev = 0;
  while (x != 0) {
    int digit = x % 10; // Get last digit
    x /= 10;            // Remove last digit

    // Check for overflow before updating rev
    if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7))
      return 0;
    if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8))
      return 0;

    rev = rev * 10 + digit;
  }
  return rev;
}

int main() {
  int x;
  cout << "Enter an integer: ";
  cin >> x;
  cout << "Reversed integer: " << reverse(x) << endl;
  return 0;
}
