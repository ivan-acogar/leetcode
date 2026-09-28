/*
1431. Kids With the Greatest Number of Candies
Source: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

Description:
Each value in candies is the number of candies a child has. For each child,
check whether giving them all extraCandies would make their total at least
as large as every other child's count. Return one boolean per child.
Each child is considered independently, and ties for the greatest count qualify.

LeetCode examples:

Example 1:
Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true]

Example 2:
Input: candies = [4,2,1,1,2], extraCandies = 1
Output: [true,false,false,false,false]

Example 3:
Input: candies = [12,1,12], extraCandies = 10
Output: [true,false,true]

Approach: compare each child's possible total with every original candy count.
Time: O(n^2). Space: O(n) for the result and O(1) for other variables.
*/

#include <vector>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        std::vector<bool> result;
        int length = static_cast<int>(candies.size());

        for (int i = 0; i < length; i++) {
            // Only the current child receives the extra candies in this comparison.
            int totalCandies = candies[i] + extraCandies;
            bool hasGreatestCount = true;

            for (int j = 0; j < length; j++) {
                // An equal count is allowed; only a strictly larger count disqualifies it.
                if (totalCandies < candies[j]) {
                    hasGreatestCount = false;
                }
            }

            result.push_back(hasGreatestCount);
        }

        return result;
    }
};
