/*
88. Merge Sorted Array
Source: https://leetcode.com/problems/merge-sorted-array/

Description:
Combine two sorted integer arrays and store their values in nums1 in ascending
order, allowing duplicates. Only the first m positions of nums1 contain input
values; its final n positions are placeholders. nums2 contains n input values.
Modify nums1 directly instead of returning another array.

LeetCode examples:

Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

Example 2:
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]

Example 3:
Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]

Approach: compare the largest remaining values using two indices, and write
the larger value into nums1 from right to left using a third index.
Time: O(m + n). Additional space: O(1).
*/

#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        // i and j track the last unmerged input values, excluding placeholders.
        int i = m - 1;
        int j = n - 1;

        // Fill from the back to avoid overwriting input values still needed.
        // Stop when nums2 is exhausted: any remaining nums1 values are in place.
        for (int k = m + n - 1; j >= 0; k--) {
            // Check i first so nums1[i] is accessed only when a value remains.
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
        }
    }
};
