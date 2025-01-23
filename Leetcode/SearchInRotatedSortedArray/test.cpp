#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target) {
  auto it = find(nums.begin(), nums.end(), target);

  if (it != nums.end()) {
    return distance(nums.begin(), it);
  } else {
    return -1;
  }
}

int main() {
  // Initialising the variables
  vector<int> nums1 = {4, 5, 6, 7, 0, 1, 2};
  int target1 = 0;
  // calling the function
  int result = search(nums1, target1);

  // printing array, target1 and result
  cout << "Nums = ";
  for (auto i : nums1) {
    cout << i << " ";
  }
  cout << "\nTarget 1 : " << target1 << endl;
  cout << "Result: " << result << endl;

  // Initialising the variables
  vector<int> nums2 = {4, 5, 6, 7, 0, 1, 2};
  int target2 = 3;
  // calling the function
  int result2 = search(nums2, target2);

  // printing target2 and result
  cout << "\nTarget 2 : " << target2 << endl;
  cout << "Result: " << result2 << endl;
  return 0;
}
