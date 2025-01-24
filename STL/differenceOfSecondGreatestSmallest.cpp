// Find the difference of second greatest and second smallest number from
// a vector.
// Input: [5, 2, 4, 1, 9, 3, 8, 7]
// Output: 6
// Explanation: second greatest = 8, second smallest = 2
// result => 8 - 2 = 6

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int diffOfsecGS(vector<int> v) {
  int l = v.size();
  int sg, ss, result;

  // sorting vector in asc. order
  sort(v.begin(), v.end());

  // find the second smallest
  for (int i = 1; i < l; i++) {
    if (v[0] < v[i]) {
      ss = v[i];
      break;
    }
  }

  // find the second greatest
  for (int i = l - 2; i >= 0; i--) {
    if (v[l - 1] > v[i]) {
      sg = v[i];
      break;
    }
  }
  // storing the difference
  result = sg - ss;
  return result;
}

int main() {
  int res;
  vector<int> p = {5, 2, 4, 1, 9, 3, 8, 7};
  res = diffOfsecGS(p);
  cout << "Result: " << res << endl;

  return 0;
}
