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
*/

#include <string>
#include <unordered_set>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) { // Complexity: O(n).
        /* Sliding window using hash set: the window moves forward
        inside the string, but if an already seen character shows up,
        then the window shrinks from the left until there is no repeated
        character inside the window. */

        std::unordered_set<char> window;
        int longest{};
        int left{};

        for(int i = 0; i < s.size(); i++){

            /* If the incoming character is repeated,
            remove characters from the left until the
            duplicate is gone. */
            while(window.count(s[i])){
                window.erase(s[left]);
                left++;
            }

            window.insert(s[i]);

            if(window.size() > longest){
                longest = window.size();
            }
        }

        return longest;
    }
};
