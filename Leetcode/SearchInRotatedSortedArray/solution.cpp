/*************************************************************************
There is an array nums sorted in ascending order (with distinct values).
Array nums is rotated from an unknown index k such that ,
for example: [0,1,2,4,5,6,7] might be rotated from index 3 and 
become [4,5,6,7,0,1,2]

Given the array nums after the rotation and an integer target,
return the index of target if it is in nums, or -1 if it is not in nums.

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4

Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

*************************************************************************/



class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = find(nums.begin(),nums.end(),target);

        if(it != nums.end()){
            return distance(nums.begin(),it);
        } else {
            return -1;
        }
    }
};
