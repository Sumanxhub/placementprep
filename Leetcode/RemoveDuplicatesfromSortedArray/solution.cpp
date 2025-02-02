/**********************************************************************************

Given a sorted array, remove the duplicates in place such that each element
appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with
constant memory.

For example,
Given input array A = [1,1,2],

Your function should return length = 2, and A is now [1,2].

**********************************************************************************/

class Solution {
public:
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
};
