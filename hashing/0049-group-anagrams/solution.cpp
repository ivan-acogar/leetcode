/*
49. Group Anagrams
Source: https://leetcode.com/problems/group-anagrams/

Description:
Given an array of strings strs, collect words that contain the same letters
with the same frequencies into groups. The groups may appear in any order.

LeetCode examples:

Example 1:
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Example 2:
Input: strs = [""]
Output: [[""]]

Example 3:
Input: strs = ["a"]
Output: [["a"]]
*/

#include <algorithm>
#include <cstddef>
#include <string>
#include <unordered_map>
#include <vector>

class Solution {
  public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs) {

        // we will find the anagrams by using the sorted strings as keys inside the map.
        // each key will be associated with a vector containing the original anagram strings.
        // finally, a vector that contains vectors will be filled up with only the values inside the
        // map.

        std::vector<std::vector<std::string>> vec; // storage for final answer.
        std::unordered_map<std::string, std::vector<std::string>> map;
        std::string aux{};

        for (std::size_t i = 0; i < strs.size(); i++) {
            aux = strs[i]; // pass the string to aux variable.

            std::sort(aux.begin(), aux.end()); // sort the string of aux variable.

            map[aux].push_back(
                strs[i]); // insert the sorted string as key in the map.
                          // then insert the original string at the key's associated vector.
        }

        for (const auto &[key, data] : map) {
            vec.push_back(
                data); // fill the vector of vectors with the value of each key inside the map.
        }

        return vec;
    }
};
