/**********************************************************************************

Given an array of integers nums and an integer target, we have to return an
array of indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not
use the same element twice.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9,
we return [0, 1] - An array of indices

**********************************************************************************/

class Solution {
public:
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
};
