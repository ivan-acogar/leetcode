/*
217. Contains Duplicate
Source: https://leetcode.com/problems/contains-duplicate/

Description:
Check whether nums contains a repeated integer. Return true when a number
appears more than once; otherwise, return false.

LeetCode examples:

Example 1:
Input: nums = [1,2,3,1]
Output: true

Example 2:
Input: nums = [1,2,3,4]
Output: false

Example 3:
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true

Approach: store the numbers already seen and check whether the next one repeats.
Expected time: O(n). Additional space: O(n).
*/

#include <unordered_set>
#include <vector>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen;
        int length = static_cast<int>(nums.size());

        for (int i = 0; i < length; i++) {
            // A set stores unique values. count() returns 1 if the value exists
            // and 0 otherwise. Check before inserting the current number.
            if (seen.count(nums[i]) != 0) {
                return true;
            }

            seen.insert(nums[i]);
        }

        return false;
    }
};
