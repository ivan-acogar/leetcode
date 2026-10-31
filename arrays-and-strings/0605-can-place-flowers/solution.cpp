/*
605. Can Place Flowers
Source: https://leetcode.com/problems/can-place-flowers/

Description:
You have a long flowerbed in which some of the plots are planted, and some are
not. However, flowers cannot be planted in adjacent plots.

Given an integer array flowerbed containing 0's and 1's, where 0 means empty
and 1 means not empty, and an integer n, return true if n new flowers can be
planted in the flowerbed without violating the no-adjacent-flowers rule and
false otherwise.

LeetCode examples:

Example 1:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: true

Example 2:
Input: flowerbed = [1,0,0,0,1], n = 2
Output: false
*/

#include <vector>

class Solution {
public:
    bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
        // Approach: plant greedily and mark each planted spot with 1.
        // n is used as the counter of flowers we still have to place.
        int sz = flowerbed.size();

        // Three consecutive cells that form the window: i is the left cell, j the middle one, k the right one.
        int i{};
        int j{1};
        int k{2};

        // Edge case: a single plot can hold a flower if it is empty.
        if (sz == 1 && flowerbed[0] == 0){
            n--;
        }

        // Edges: the first and last plots only have one neighbor, so they are checked separately.
        if (sz >= 2){
            // Plant at the first plot if it and its neighbor are empty.
            if (flowerbed[0] == 0 && flowerbed[1] == 0){
                n--;
                flowerbed[0] = 1;
            }
            // Plant at the last plot if it and its neighbor are empty.
            if (flowerbed[sz - 2] == 0 && flowerbed[sz - 1] == 0 && n > 0){
                n--;
                flowerbed[sz - 1] = 1;
            }
        }

        // Middle plots: slide the window until it reaches the end or no flowers are left to place.
        while(k < sz - 1 && n > 0){
            // Three empty cells in a row means we can plant in the middle one, then skip ahead by 2.
            if (flowerbed[i] == 0 && flowerbed[j] == 0 && flowerbed[k] == 0){
                n--;
                i += 2;
                j += 2;
                k += 2;
            }
            // Otherwise, move the window forward by 1.
            else {
                i++;
                j++;
                k++;
            }
        }

        // If there are no flowers left to place, they all fit.
        if (n <= 0){
            return true;
        }
        else {
            return false;
        }
    }
};
