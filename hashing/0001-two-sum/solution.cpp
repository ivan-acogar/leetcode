/*
1. Two Sum
Source: https://leetcode.com/problems/two-sum/

Description:
Given an array of integers nums and an integer target, return the indices of
the two numbers that add up to target. Each input has exactly one solution,
and the same element cannot be used twice. The answer can be in any order.

LeetCode examples:

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]

Approach: one pass with a hash map. For each number, compute the value it
still needs to reach target. If that value was already seen, both indices are
known. Otherwise, store the current number with its index and keep going.
Expected time: O(n). Additional space: O(n).
*/

#include <unordered_map>
#include <vector>

class Solution {
  public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        int s = nums.size();

        // The map stores each number already seen with its index (value -> index),
        // so looking up a complement takes O(1) on average.
        std::unordered_map<int, int> seen;

        for (int i = 0; i < s; i++) {
            int needed = target - nums[i];

            // Check before inserting the current number. This way an element
            // is never paired with itself, and duplicates like [3,3] still work
            // because the first 3 is already stored when the second one arrives.
            if (seen.count(needed) != 0) {
                return {i, seen[needed]};
            }

            seen[nums[i]] = i;
        }

        // Not reached: the problem guarantees exactly one solution.
        return {};
    }
};
