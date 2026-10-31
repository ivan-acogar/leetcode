/*
704. Binary Search
Source: https://leetcode.com/problems/binary-search/

Description:
Given an array of integers nums sorted in ascending order and an integer
target, return the index of target in nums, or -1 if it does not exist.
The algorithm must run in O(log n) time.

LeetCode examples:

Example 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

Example 2:
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1
*/

#include <vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        // Binary search: O(log n).
        int left = 0;

        // Index of the last element;
        int right = nums.size() - 1;

        while (left <= right) {

            // Lower middle; written this way to avoid overflow.
            int middle = left + (right - left) / 2;

            // If target exists, it is always found by middle at some point.
            if (nums[middle] == target) {
                return middle;
            }

            // nums[middle] is too small, so the target can only be to the right.
            else if (nums[middle] < target) {
                left = middle + 1;
            }

            // nums[middle] is too big, so the target can only be to the left.
            else {
                right = middle - 1;
            }

        }
        // Range is empty, so the target is not in the array.
        return -1;
    }
};
