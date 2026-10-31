/*
20. Valid Parentheses
Source: https://leetcode.com/problems/valid-parentheses/

Description:
Given a string s containing just the characters '(', ')', '{', '}', '[' and
']', determine if the input string is valid. An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

LeetCode examples:

Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([])"
Output: true

Example 5:
Input: s = "([)]"
Output: false
*/

#include <stack>
#include <string>

class Solution {
public:
    bool isValid(std::string s) {
        /* Stack of characters: store the opening brackets in a stack
        If a closing bracket is found, the top of the stack should be an
        opening bracket of the same type. If not, the format is wrong. */
        std::stack<char> stk;

        for (int i = 0; i < s.size(); i++){

            if (s[i] == ')'){
                // Check if the stack is empty.
                if (stk.empty()) {
                    return false;
                }
                // Check if the last opening bracket was the same type as the found one.
                if (stk.top() == '('){
                    stk.pop();
                }
                // If it is a different type, return false.
                else {
                    return false;
                }
            }

            else if (s[i] == ']'){
                if (stk.empty()) {
                    return false;
                }
                else if (stk.top() == '['){
                    stk.pop();
                }
                else {
                    return false;
                }
            }

            else if (s[i] == '}'){
                if (stk.empty()) {
                    return false;
                }
                if (stk.top() == '{'){
                    stk.pop();
                }
                else {
                    return false;
                }
            }

            // Store the opening brackets in the stack.
            else {
                stk.push(s[i]);
            }
        }

        /* If there is anything left, it means an opening bracket
        never found its closing bracket. Return false. */
        if (stk.size() != 0){
            return false;
        }

        // The format is correct.
        return true;
    }
};
