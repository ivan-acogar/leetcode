/*
238. Product of Array Except Self
Source: https://leetcode.com/problems/product-of-array-except-self/

Description:
Given an integer array nums, return an array answer such that answer[i] is
equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit
integer.

You must write an algorithm that runs in O(n) time and without using the
division operation.

LeetCode examples:

Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
*/

#include <vector>

class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        // Initialize the vectors with size n.
        int n = nums.size();
        std::vector<int> answer(n);
        std::vector<int> left(n);
        std::vector<int> right(n);

        // Loop from the left and store the cumulative product up to each index.
        int left_total = nums[0];
        left[0] = left_total;
        for (int i = 1; i < n; i++){
            left_total *= nums[i];
            left[i] = left_total;
        }

        // Loop from the right and store the cumulative product from each index to the end.
        int right_total = nums[n - 1];
        right[n - 1] = right_total;
        for (int i = n - 2; i >= 0; i--){
            right_total *= nums[i];
            right[i] = right_total;
        }

        // Handle both edge cases before the loop.
        answer[0] = right[1];
        answer[n - 1] = left[n - 2];

        // Compute each value by multiplying the prefix and suffix.
        for (int i = 1; i < n - 1; i++){
            answer[i] = left[i - 1] * right[i + 1];
        }

        return answer;
    }
};
