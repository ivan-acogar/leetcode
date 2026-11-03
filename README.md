# LeetCode Solutions in C++

My solutions to algorithm and data structure problems, written in **C++20** while I practice problem solving for technical interviews.

Each solution is organized by technique and starts with the problem statement, the approach I used, and its time and space complexity.

## Solutions

| # | Problem | Difficulty | Technique | Time | Space | Solution |
|---:|---|---|---|---|---|---|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | Hashing | O(n) | O(n) | [C++](hashing/0001-two-sum/solution.cpp) |
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | Sliding window | O(n) | O(min(n, k)) | [C++](sliding-window/0003-longest-substring-without-repeating-characters/solution.cpp) |
| 20 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | Easy | Stack | O(n) | O(n) | [C++](stacks-and-queues/0020-valid-parentheses/solution.cpp) |
| 27 | [Remove Element](https://leetcode.com/problems/remove-element/) | Easy | Two pointers | O(n) | O(1) | [C++](two-pointers/0027-remove-element/solution.cpp) |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | Medium | Hashing, sorting | O(n · k log k) | O(n · k) | [C++](hashing/0049-group-anagrams/solution.cpp) |
| 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | Easy | Two pointers | O(m + n) | O(1) | [C++](two-pointers/0088-merge-sorted-array/solution.cpp) |
| 128 | [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) | Medium | Hashing | O(n) | O(n) | [C++](hashing/0128-longest-consecutive-sequence/solution.cpp) |
| 151 | [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/) | Medium | Strings (right-to-left scan with two indices) | O(n) | O(n) | [C++](arrays-and-strings/0151-reverse-words-in-a-string/solution.cpp) |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Easy | Hashing | O(n) | O(n) | [C++](hashing/0217-contains-duplicate/solution.cpp) |
| 238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | Medium | Arrays (prefix and suffix products) | O(n) | O(n) | [C++](arrays-and-strings/0238-product-of-array-except-self/solution.cpp) |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | Easy | Hashing (frequency count) | O(n) | O(1) | [C++](hashing/0242-valid-anagram/solution.cpp) |
| 334 | [Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/) | Medium | Arrays (greedy, two tracked minimums) | O(n) | O(1) | [C++](arrays-and-strings/0334-increasing-triplet-subsequence/solution.cpp) |
| 443 | [String Compression](https://leetcode.com/problems/string-compression/) | Medium | Two pointers (read and write, in place) | O(n) | O(1) | [C++](two-pointers/0443-string-compression/solution.cpp) |
| 605 | [Can Place Flowers](https://leetcode.com/problems/can-place-flowers/) | Easy | Arrays (greedy, sliding window of 3) | O(n) | O(1) | [C++](arrays-and-strings/0605-can-place-flowers/solution.cpp) |
| 643 | [Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray-i/) | Easy | Sliding window (fixed size) | O(n) | O(1) | [C++](sliding-window/0643-maximum-average-subarray-i/solution.cpp) |
| 704 | [Binary Search](https://leetcode.com/problems/binary-search/) | Easy | Binary search | O(log n) | O(1) | [C++](binary-search/0704-binary-search/solution.cpp) |
| 1071 | [Greatest Common Divisor of Strings](https://leetcode.com/problems/greatest-common-divisor-of-strings/) | Easy | Strings (prefix brute force; concatenation + GCD) | O(m · n); O(m + n) | O(n); O(m + n) | [C++](arrays-and-strings/1071-greatest-common-divisor-of-strings/solution.cpp) |
| 1431 | [Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/) | Easy | Arrays | O(n²) | O(1) extra | [C++](arrays-and-strings/1431-kids-with-the-greatest-number-of-candies/solution.cpp) |
| 1768 | [Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/) | Easy | Strings | O(m + n) | O(m + n) | [C++](arrays-and-strings/1768-merge-strings-alternately/solution.cpp) |
| 1929 | [Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/) | Easy | Arrays | O(n) | O(n) | [C++](arrays-and-strings/1929-concatenation-of-array/solution.cpp) |

*n* and *m* are input sizes, *k* is the alphabet size (problem 3) or the longest word length (problem 49). For problem 1071, *m* ≤ *n* are the string lengths and each cell lists the first solution, then the second.

## Structure

```text
<technique>/<problem-id>-<problem-name>/solution.cpp
```

Every `solution.cpp` contains:

1. The problem description and the LeetCode examples, as comments.
2. The approach and its time and space complexity.
3. A `Solution` class ready to submit on LeetCode (no `main`).

Techniques covered so far: hashing, sliding window, two pointers, and arrays and strings. Next: binary search, linked lists, stacks and queues, and trees and graphs.

## Checking a solution locally

The solutions are checked with GCC in C++20 mode with warnings enabled:

```bash
g++ -std=c++20 -Wall -Wextra -Wpedantic -fsyntax-only path/to/solution.cpp
```

In VS Code, open `LeetCode.code-workspace` and press **Ctrl+Shift+B** to run the same check on the open file.
