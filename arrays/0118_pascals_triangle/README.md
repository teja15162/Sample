# 118. Pascal's Triangle

![Easy](https://img.shields.io/badge/Difficulty-Easy-brightgreen)

---

## Topics

- Array
- Dynamic Programming

---

## Problem Link

https://leetcode.com/problems/pascals-triangle/

---

## Problem Description

Given an integer `numRows`, return the first numRows of **Pascal's triangle**.

In **Pascal's triangle**, each number is the sum of the two numbers directly above it as shown:

![image](https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif)

**Example 1:**

```
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
```

**Example 2:**

```
Input: numRows = 1
Output: [[1]]
```

**Constraints:**

- `1 <= numRows <= 30`

---

## Approach

Pascal's Triangle has a special property: every row starts and ends
with `1`, and every element in a row can be represented using a
binomial coefficient.

For a row `i`, the elements are:

C(i,0), C(i,1), C(i,2), ..., C(i,i)

where:

C(i,j) = i! / (j! * (i-j)!)

Instead of calculating factorials for every element, which would
require unnecessary repeated calculations, we calculate each element
from the previous element in the same row.

If the current element is C(i,j), then the next element is:

C(i,j+1) = C(i,j) * (i-j) / (j+1)

So we start every row with:

value = 1

because:

C(i,0) = 1

Then we repeatedly calculate the next value using the formula above
and add each value to the current row.

For example, for row `i = 4`:

1
↓
1 × 4 / 1 = 4
↓
4 × 3 / 2 = 6
↓
6 × 2 / 3 = 4
↓
4 × 1 / 4 = 1

Therefore, the row becomes:

[1, 4, 6, 4, 1]

Finally, we add every generated row to the triangle and return it.

### Why this approach?

We don't need to calculate factorials separately for every element.
Each value is calculated directly from the previous value, making the
solution simpler and more efficient.

---

## Complexity

| Metric | Value |
|---------|-------|
| Time | O(N²) |
| Space | O(N²) |

---

## Solution

See:

`solution.cpp`

---

Generated using **PushCode**
