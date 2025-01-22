#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  vector<int> p;
  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] == target) {
        p.push_back(i);
        p.push_back(j);
      }
    }
  }
  return p;
}

int main() {
  // Test case 1
  vector<int> case1 = {2, 7, 11, 15};
  int target1 = 9;

  vector<int> result1 = twoSum(case1, target1);
  cout << "Result 1: ";
  for (auto i : result1) {
    cout << i << " ";
  }

  // Test case 2
  vector<int> case2 = {3, 2, 4};
  int target2 = 6;

  vector<int> result2 = twoSum(case2, target2);
  cout << "\nResult 2: ";
  for (auto i : result2) {
    cout << i << " ";
  }

  // Test case 3
  vector<int> case3 = {3, 3};
  int target3 = 6;

  vector<int> result3 = twoSum(case3, target3);
  cout << "\nResult 3: ";
  for (auto i : result3) {
    cout << i << " ";
  }

  cout << endl;
  return 0;
}
