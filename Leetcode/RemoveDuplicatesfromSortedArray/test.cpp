#include <cassert>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums) {
  map<int, int> m;
  for (auto k : nums) {
    m[k]++;
  }

  nums.clear();
  for (auto k : m) {
    nums.push_back(k.first);
  }

  int k = nums.size();
  return k;
}

int main() {

  vector<int> case1 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
  vector<int> expectedResult = {0, 1, 2, 3, 4};

  // Call the removeDuplicates function
  int k = removeDuplicates(case1);

  // Check the length of the resulting array with error message
  assert(k == (int)expectedResult.size() && "Length mismatch");

  // Verify the contents of the resulting array with array message
  for (int i = 0; i < k; i++) {
    assert(case1[i] == expectedResult[i] && "Value mismatch");
  }

  // If no assertion fails, print success
  cout << "All tests passed successfully!" << endl;

  return 0;
}
