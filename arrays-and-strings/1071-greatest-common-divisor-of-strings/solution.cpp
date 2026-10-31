/*
1071. Greatest Common Divisor of Strings
Source: https://leetcode.com/problems/greatest-common-divisor-of-strings/

Description:
For two strings s and t, we say "t divides s" if and only if
s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more
times).

Given two strings str1 and str2, return the largest string x such that x
divides both str1 and str2.

LeetCode examples:

Example 1:
Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"

Example 2:
Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"

Example 3:
Input: str1 = "LEET", str2 = "CODE"
Output: ""

Example 4:
Input: str1 = "AAAAAB", str2 = "AAA"
Output: ""
*/

#include <numeric>
#include <string>
#include <utility>

class Solution {
public:
    std::string gcdOfStrings(std::string str1, std::string str2) {
        // Set str2 as the longest string and str1 as the shortest for every case.
        if (str1.size() > str2.size()){
            std::swap(str1, str2);
        }

        // Set prefix as the str1 at first, then we will shrink it.
        std::string prefix = str1;

        // Set test as prefix at first too, we will use this for testing concatenated prefixes.
        std::string test = prefix;

        // Use while loop for checking all possible prefixes; decrease the prefix one by one.
        // Increase test by concatenating the same prefix over and over until our test size is greater than str1, and then str2.
        while (prefix.size() > 0){
            test = prefix;
            while (test.size() <= str1.size()){
                if (test == str1){
                    while (test.size() <= str2.size()){
                        if (test == str2){
                            return prefix;
                        }
                        test += prefix;
                    }
                }
                test += prefix;
            }
            prefix.pop_back();
        }
        // If there is no valid prefix.
        return "";
    }

    // Second solution: if a common divisor exists, str1 + str2 == str2 + str1,
    // and the answer is the prefix whose length is the GCD of both lengths.
    std::string gcdOfStringsConcat(std::string str1, std::string str2) {
        if (str1 + str2 != str2 + str1) return "";
        return str1.substr(0, std::gcd(str1.size(), str2.size()));
    }
};
