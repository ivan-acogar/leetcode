/*
334. Increasing Triplet Subsequence
Source: https://leetcode.com/problems/increasing-triplet-subsequence/

Description:
You are given an integer array nums.

Return true if there exists a triple of indices (i, j, k) such that i < j < k
and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

LeetCode examples:

Example 1:
Input: nums = [1,2,3,4,5]
Output: true
Explanation: Any triplet where i < j < k is valid.

Example 2:
Input: nums = [5,4,3,2,1]
Output: false
Explanation: No triplet exists.

Example 3:
Input: nums = [2,1,5,0,4,6]
Output: true
Explanation: One of the valid triplet is (1, 4, 5), because
nums[1] == 1 < nums[4] == 4 < nums[5] == 6.
*/

#include <climits>
#include <vector>

class Solution {
public:
    bool increasingTriplet(std::vector<int>& nums) {
        // Initialize first and second as the maximum possible value for an int.
        int first = INT_MAX;
        int second = INT_MAX;

        for (const int& v : nums){
            // The current v is smaller than or equal to "first".
            if (v <= first){
                first = v;
            }
            // The current v is greater than "first" but smaller than "second".
            // "second" is the smallest value that has a smaller value before it.
            else if (v < second){
                second = v;
            }
            // The current v is greater than both "first" and "second".
            else if (v > second){
                return true;
            }
        }

        return false;
    }
};
