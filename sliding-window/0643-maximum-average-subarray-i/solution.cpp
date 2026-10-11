/*
643. Maximum Average Subarray I
Source: https://leetcode.com/problems/maximum-average-subarray-i/

Description:
Given an integer array nums with n elements and an integer k, find the
contiguous subarray of length exactly k that has the largest average and
return that average. Any answer within 10^-5 of the correct value is accepted.

LeetCode examples:

Example 1:
Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

Example 2:
Input: nums = [5], k = 1
Output: 5.00000

Approach: fixed-size sliding window. Compute the sum of the first k elements,
then move the window one position at a time: subtract the element that leaves
and add the one that enters. Every window has the same length k, so the largest
sum also has the largest average and the division happens only once, at the end.
Recomputing each window from scratch costs O(k) per window, O((n - k) * k) in
total, and exceeds the time limit on large inputs.
Expected time: O(n); each element enters and leaves the window once.
Additional space: O(1).
*/

#include <algorithm>
#include <vector>

class Solution {
public:
    double findMaxAverage(std::vector<int>& nums, int k) {
        /* Sliding window: consecutive windows share k - 1 elements,
        so each new sum is updated in O(1) instead of recomputed. */

        int n = nums.size();
        double max_sum{};

        // Compute the sum of the first window.
        for (int i = 0; i < k; i++) {
            max_sum += nums[i];
        }

        double curr_sum{max_sum};

        // Slide the window through the rest of the array.
        for (int i = 0; i < n - k; i++) {

            int j{i + k};

            /* Reuse the previous sum:
            subtract the outgoing element (i)
            and add the incoming one (j). */
            curr_sum = curr_sum - nums[i] + nums[j];

            max_sum = std::max(max_sum, curr_sum);
        }

        return max_sum / k;
    }
};
