/****************************************************************
Given a sorted array of distinct integers and a target value,
return the index if the target is found. If not, return the
index where it would be if it were inserted in order.


Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4
****************************************************************/

class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {

    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
  }
};

/*
  lower_bound() - It returns an iterator to the first element
that is not less than (i.e., greater than or equal to) a given value in a sorted
range. You can use it when working with sorted containers like vector, set, map,
or array. It works on Binary search algorithm.
*/
