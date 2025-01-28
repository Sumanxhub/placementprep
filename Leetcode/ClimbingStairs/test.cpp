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
  int num;
  cout << "Enter number: ";
  cin >> num;
  cout << "\nResult: ";
  cout << climbStairs(num);
  cout << "\n";

  return 0;
}
