/*
151. Reverse Words in a String
Source: https://leetcode.com/problems/reverse-words-in-a-string/

Description:
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will
be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between
two words. The returned string should only have a single space separating the
words. Do not include any extra spaces.

LeetCode examples:

Example 1:
Input: s = "the sky is blue"
Output: "blue is sky the"

Example 2:
Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing
spaces.

Example 3:
Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single
space in the reversed string.
*/

#include <string>

class Solution {
public:
    std::string reverseWords(std::string s) {
        int n = s.size();
        int l = n - 1;
        int aux = 0;
        std::string words{};

        while (true){
            // Decrease left to the position of the first character; do not move left if is 0;
            while (s[l] == ' ' && l > 0){
                l--;
            }

            int r = l;

            // Decrease left to next space postion; do not move if left is 0;
            while (s[l] != ' ' && l > 0){
                l--;
            }

            if (l == 0){
                aux = l;
            }
            else {
                aux = l + 1;
            }

            // Store the characters inside the window.
            bool space = false;
            if (aux <= r){
                while (aux <= r){
                    if (s[aux] != ' '){
                        words += s[aux];
                    }
                    aux++;
                }
                space = true;
            }

            if (l == 0){
                break;
            }

            if (space){
                words += ' ';
            }
        }

        if (words.back() == ' '){
            words.pop_back();
        }

        return words;
    }
};
