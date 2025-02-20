/*************************************************************************
Suppose an array of length n sorted in ascending order is rotated between
1 and n times.
For example, the array nums = [0,1,4,4,5,6,7] might become:

    [4,5,6,7,0,1,4] if it was rotated 4 times.
    [0,1,4,4,5,6,7] if it was rotated 7 times.

Given the sorted rotated array nums that may contain duplicates, return the
minimum element of this array.

You must decrease the overall operation steps as much as possible.
Example 1:

Input: nums = [1,3,5]
Output: 1

Example 2:

Input: nums = [2,2,2,0,1]
Output: 0

************************************************************************/

class Solution {
public:
  int findMin(vector<int> &nums) {
    // storing minimum element
    int small = *min_element(nums.begin(), nums.end());
    return small;
  }
};
