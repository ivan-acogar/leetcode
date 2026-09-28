/*
242. Valid Anagram
Source: https://leetcode.com/problems/valid-anagram/

Description:
Check whether s and t contain the same letters with matching frequencies,
regardless of their order. Return true when they are anagrams and false
otherwise. The problem uses lowercase English letters.

LeetCode examples:

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

Approach: count the letters in s and subtract the letters in t using a map.
Expected time: O(n). The map uses O(1) space for the 26 possible letters.
Passing the strings by value can add O(n) space for their copies.
*/

#include <string>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.size() != t.size()) {
            return false;
        }

        std::unordered_map<char, int> balance;
        int length = static_cast<int>(s.size());

        // Each key is a letter, and its value is a counter.
        // If a key does not exist, operator[] initializes its counter to 0.
        for (int i = 0; i < length; i++) {
            balance[s[i]]++;
        }

        // Subtracting the letters in t leaves matching frequencies at 0.
        for (int i = 0; i < length; i++) {
            balance[t[i]]--;
        }

        // With equal lengths, checking the letters in s is enough:
        // an extra letter in t would mean that some letter from s is missing.
        for (int i = 0; i < length; i++) {
            if (balance[s[i]] != 0) {
                return false;
            }
        }

        return true;
    }
};
