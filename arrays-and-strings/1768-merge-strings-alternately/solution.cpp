/*
1768. Merge Strings Alternately
Source: https://leetcode.com/problems/merge-strings-alternately/

Description:
Build a string by taking one character from word1, then one from word2,
and repeating in that order. When one word runs out, append the remaining
characters from the other word. Return the combined string.

LeetCode examples:

Example 1:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"

Example 2:
Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"

Example 3:
Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"

Approach: visit each position and append its character from each word if it exists.
Time: O(m + n). Space: O(m + n) for the result and the input copies.
*/

#include <algorithm>
#include <string>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string merged;
        int firstLength = static_cast<int>(word1.size());
        int secondLength = static_cast<int>(word2.size());
        int longestLength = std::max(firstLength, secondLength);

        for (int i = 0; i < longestLength; i++) {
            // Check each word separately to avoid accessing a position past its end.
            if (i < firstLength) {
                merged.push_back(word1[i]);
            }

            // Appending from word2 second preserves the required alternating order.
            if (i < secondLength) {
                merged.push_back(word2[i]);
            }
        }

        return merged;
    }
};
