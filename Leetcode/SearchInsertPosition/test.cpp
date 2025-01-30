#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target) {
  int position = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
  return position;
}

int main() {
  // Test case 1
  vector<int> case1 = {1, 3, 5, 6};
  int target1 = 5;
  int result1;

  // print array
  cout << "Array : ";
  for (auto k : case1) {
    cout << k << " ";
  }
  cout << "\nTarget: " << target1;
  // calling function
  result1 = searchInsert(case1, target1);
  cout << "\nResult: " << result1 << endl;

  // Test case 2
  vector<int> case2 = {1, 3, 5, 6, 8};
  int target2 = 7;
  int result2;

  // print array
  cout << "Array : ";
  for (auto k : case2) {
    cout << k << " ";
  }
  cout << "\nTarget: " << target2;
  // calling function
  result2 = searchInsert(case2, target2);
  cout << "\nResult: " << result2 << endl;

  // Test case 3
  vector<int> case3 = {0, 1, 2, 3, 5, 6, 8, 8, 12, 12};
  int target3 = 10;
  int result3;

  // print array
  cout << "Array : ";
  for (auto k : case3) {
    cout << k << " ";
  }
  cout << "\nTarget: " << target3;
  // calling function
  result3 = searchInsert(case3, target3);
  cout << "\nResult: " << result3 << endl;

  return 0;
}
