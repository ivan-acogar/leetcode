/*
128. Longest Consecutive Sequence
Source: https://leetcode.com/problems/longest-consecutive-sequence/

Description:
Given an unsorted integer array nums, find the length of its longest sequence
of consecutive integer values. The values need not be adjacent in the input,
and duplicates do not extend a sequence. Use an algorithm with O(n) time.

LeetCode examples:

Example 1:
Input: nums = [100,4,200,1,3,2]
Output: 4

Example 2:
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

Example 3:
Input: nums = [1,0,1,2]
Output: 3

Expected time: O(n). Additional space: O(n).
*/

#include <unordered_set>
#include <vector>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {

        // each value of the given array will be inserted inside a hash set.
        // for each value inside the set, we will verify if there is an consecutive value too.
        // if there is a consecutive value AND and there is NOT a predecessor value, that means we are the start of a chain.
        // we will follow the chain keeping the length value inside a variable.
        // finally, we will keep the largest length and return it when no other chain is found.

        std::unordered_set<int> set;
        int length{1};
        int largest{};
        int target{};

        for (const auto& value : nums){
            set.insert(value);                  // store the given values in the set.
        }

        for (const auto& value : set){

            target = value + 1;                  // target will keep the consecutive value we are looking for.

            if (set.count(value - 1) == 0) {     // only if there is not a predecessor value.

                while (set.count(target)){      // follow the chain of consecutive values.
                    target++;                   // target moves to the next value.
                    length++;                   // length increases at each next value found.
                }
            }

            if (largest < length){              // if a new largest is found.
                largest = length;
            }

            length = 1;                         // reset the length value.
        }

        return largest;
    }
};
