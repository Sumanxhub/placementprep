#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val) {

  // eliminating the occurrences of val in nums
  nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
  // new length of nums
  int k = nums.size();
  return k;
}

int main() {

  vector<int> nums1 = {0, 1, 2, 2, 3, 0, 4, 2};
  int value = 2;
  // calling  the function
  int result = removeElement(nums1, value);
  // print new length of nums
  cout << "Result: " << result << endl;
  // print new array nums
  cout << "Nums: ";
  for (auto i : nums1) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}
