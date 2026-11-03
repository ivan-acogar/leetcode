/*
443. String Compression
Source: https://leetcode.com/problems/string-compression/

Description:
Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating
characters in chars:

- If the group's length is 1, append the character to s.
- Otherwise, append the character followed by the group's length.

The compressed string s should not be returned separately, but instead, be
stored in the input character array chars. Note that group lengths that are 10
or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the
array.

You must write an algorithm that uses only constant extra space.

Note: The characters in the array beyond the returned length do not matter and
should be ignored.

LeetCode examples:

Example 1:
Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be:
["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

Example 2:
Input: chars = ["a"]
Output: Return 1, and the first character of the input array should be: ["a"]
Explanation: The only group is "a", which remains uncompressed since it's a
single character.

Example 3:
Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: Return 4, and the first 4 characters of the input array should be:
["a","b","1","2"].
Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".
*/

#include <string>
#include <vector>

class Solution {
public:
    int compress(std::vector<char>& chars) {
        int n = chars.size();
        int i = 0;  // start of the current group
        int k = 0;  // next free slot to write

        while (i < n) {
            // Move j to the end of the current group.
            int j = i;
            while (j < n && chars[j] == chars[i]) {
                j++;
            }
            int count = j - i;

            // Write the character, then the count if the group has more than one.
            chars[k++] = chars[i];
            if (count > 1) {
                for (char c : std::to_string(count)) {
                    chars[k++] = c;
                }
            }

            i = j;  // next group starts where this one ended
        }
        return k;
    }
};
