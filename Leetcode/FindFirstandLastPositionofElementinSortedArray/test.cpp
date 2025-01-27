#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target) {
  vector<int> position;
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] == target) {
      position.push_back(i);
      break;
    }
  }
  for (int i = nums.size() - 1; i >= 0; i--) {
    if (nums[i] == target) {
      position.push_back(i);
      break;
    }
  }
  if (position.size() < 1) {
    position = {-1, -1};
  }

  return position;
}

int main() {
  // Test Case 1
  vector<int> num1 = {5, 7, 7, 8, 8, 10};
  vector<int> result1;
  int target1 = 8;

  // print original array
  cout << "Array: ";
  for (auto k : num1) {
    cout << k << " ";
  }
  cout << "\nTarget: " << target1;

  // call the function
  result1 = searchRange(num1, target1);
  // print result
  cout << "\nResult: ";
  for (auto k : result1) {
    cout << k << " ";
  }
  cout << "\n\n";

  // Test Case 2
  vector<int> num2 = {7, 8, 1, 4, 5, 6, 2};
  vector<int> result2;
  int target2 = 5;

  // print original array
  cout << "Array: ";
  for (auto k : num2) {
    cout << k << " ";
  }
  cout << "\nTarget: " << target2;

  // call the function
  result2 = searchRange(num2, target2);
  // print result
  cout << "\nResult: ";
  for (auto k : result2) {
    cout << k << " ";
  }
  cout << "\n\n";

  // Test Case 3
  vector<int> num3 = {2, 3, 4, 4, 7, 8};
  vector<int> result3;
  int target3 = 5;

  // print original array
  cout << "Array: ";
  for (auto k : num3) {
    cout << k << " ";
  }
  cout << "\nTarget: " << target3;

  // call the function
  result3 = searchRange(num3, target3);
  // print result
  cout << "\nResult: ";
  for (auto k : result3) {
    cout << k << " ";
  }
  cout << "\n\n";

  // Test Case 4
  vector<int> num4 = {2, 3, 1, 1, 1, 8};
  vector<int> result4;
  int target4 = 1;

  // print original array
  cout << "Array: ";
  for (auto k : num4) {
    cout << k << " ";
  }
  cout << "\nTarget: " << target4;

  // call the function
  result4 = searchRange(num4, target4);
  // print result
  cout << "\nResult: ";
  for (auto k : result4) {
    cout << k << " ";
  }
  cout << "\n";

  return 0;
}
