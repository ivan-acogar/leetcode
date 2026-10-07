# LeetCode Solutions in C++

My solutions to algorithm and data structure problems, written in **C++20** while I practice problem solving for technical interviews.

Each solution is organized by technique and starts with the problem statement, the approach I used, and its time and space complexity.

## Solutions

| # | Problem | Difficulty | Technique | Time | Space | Solution |
|---:|---|---|---|---|---|---|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | Easy | Hashing | O(n) | O(n) | [C++](hashing/0001-two-sum/solution.cpp) |
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | Medium | Sliding window | O(n) | O(min(n, k)) | [C++](sliding-window/0003-longest-substring-without-repeating-characters/solution.cpp) |
| 49 | [Group Anagrams](https://leetcode.com/problems/group-anagrams/) | Medium | Hashing, sorting | O(n · k log k) | O(n · k) | [C++](hashing/0049-group-anagrams/solution.cpp) |
| 88 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | Easy | Two pointers | O(m + n) | O(1) | [C++](two-pointers/0088-merge-sorted-array/solution.cpp) |
| 128 | [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) | Medium | Hashing | O(n) | O(n) | [C++](hashing/0128-longest-consecutive-sequence/solution.cpp) |
| 217 | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) | Easy | Hashing | O(n) | O(n) | [C++](hashing/0217-contains-duplicate/solution.cpp) |
| 242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | Easy | Hashing (frequency count) | O(n) | O(1) | [C++](hashing/0242-valid-anagram/solution.cpp) |
| 1431 | [Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/) | Easy | Arrays | O(n²) | O(1) extra | [C++](arrays-and-strings/1431-kids-with-the-greatest-number-of-candies/solution.cpp) |
| 1768 | [Merge Strings Alternately](https://leetcode.com/problems/merge-strings-alternately/) | Easy | Strings | O(m + n) | O(m + n) | [C++](arrays-and-strings/1768-merge-strings-alternately/solution.cpp) |
| 1929 | [Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/) | Easy | Arrays | O(n) | O(n) | [C++](arrays-and-strings/1929-concatenation-of-array/solution.cpp) |

*n* and *m* are input sizes, *k* is the alphabet size (problem 3) or the longest word length (problem 49).

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
