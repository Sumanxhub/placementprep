/**************************************************************************
Given an integer array nums and an integer val, remove all occurrences of val
in nums. Then return the new length of nums.

Change the array nums such that the first k elements of nums contain the
elements which are not equal to val. Then return k.

Example:

Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [ 0,1,4,0,3 ]
Explanation: Your function should return k = 5, with the first five elements
of nums containing 0, 0, 1, 3, and 4.

***************************************************************************/

class Solution {
public:
  int removeElement(vector<int> &nums, int val) {

    // eliminating the val from nums
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    // new lenght of nums
    int k = nums.size();
    return k;
  }
};
