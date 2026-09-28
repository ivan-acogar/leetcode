/*
3. Longest Substring Without Repeating Characters
Source: https://leetcode.com/problems/longest-substring-without-repeating-characters/

Description:
Find the length of the longest contiguous part of s that has no repeated
characters. A substring must use consecutive characters, without skipping any.
Letters, digits, symbols, and spaces all count as characters.

LeetCode examples:

Example 1:
Input: s = "abcabcbb"
Output: 3

Example 2:
Input: s = "bbbbb"
Output: 1

Example 3:
Input: s = "pwwkew"
Output: 3

Approach: keep a sliding window with unique characters in a set.
Expected time: O(n); each character enters and leaves the window at most once.
Additional space: O(min(n, k)), where k is the number of possible characters.
Passing s by value can also require O(n) space for its copy.
*/

#include <string>
#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_set<char> window;
        int longestLength = 0;
        int left = 0;
        int length = static_cast<int>(s.size());

        for (int right = 0; right < length; right++) {
            // Shrink from the left until the incoming character is no longer present.
            // A while loop is needed because removing just one character may not be enough.
            while (window.count(s[right]) != 0) {
                window.erase(s[left]);
                left++;
            }

            window.insert(s[right]);

            // Both endpoints belong to the window, so its length includes the extra 1.
            int currentLength = right - left + 1;
            if (currentLength > longestLength) {
                longestLength = currentLength;
            }
        }

        return longestLength;
    }
};
