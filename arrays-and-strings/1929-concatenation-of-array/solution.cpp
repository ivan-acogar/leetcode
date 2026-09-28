/*
1929. Concatenation of Array
Source: https://leetcode.com/problems/concatenation-of-array/

Description:
Given an integer array nums of length n, build an array ans of length 2n
by placing two copies of nums one after the other, keeping their original order.
For each index i from 0 to n - 1, ans[i] and ans[i + n] must equal nums[i].
Return ans.

LeetCode examples:

Example 1:
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]

Example 2:
Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]

Approach: visit all 2n output positions and select the matching input index.
Time: O(n), using amortized O(1) push_back operations.
Space: O(n) for the result and O(1) for other variables.
*/

#include <vector>

class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>& nums) {
        int n = static_cast<int>(nums.size());
        std::vector<int> ans;

        for (int i = 0; i < n * 2; i++) {
            if (i >= n) {
                // In the second half, subtract n to reuse input indices 0 to n - 1.
                ans.push_back(nums[i - n]);
            } else {
                // push_back appends each value; nums itself remains unchanged.
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};
