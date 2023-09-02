/**
 * Problem Statement
Given a positive integer ‘n’, your task is to find the next smallest integer and the previous largest integer having the exact number of ‘1’ bits set in their binary representation as ‘n’.
Example:
‘n = 6’
The binary representation of 6 = ‘0110’, which has two ‘1’ bits set.
Next smallest integer = 9 = ‘1001’, the smallest integer greater than 6 having two ‘1’ bits set.
Previous largest integer = 5 = ‘0101’, largest integer smaller than 6 having two ‘1’ bits set.
Therefore, the answer is {9, 5}.
Note:
1. ‘n’ is a positive integer greater than one.
2. For any given integer ‘n’, there is always a positive integer smaller than ‘n’ having the exact number of ‘1’ bits set.
3. Don’t print anything. Just implement the function and return the answer.
4. ‘n’ can have a max of ‘30’ bits.
*/

#include <bits/stdc++.h>

int countOnesInBinary(int n) {
  int count{};
  while (n) {
    count += n & 1;
    n >>= 1;
  }
  return count;
}
std::vector<int> nearestNumbers(int n) {
  // Write your code here
  int countOnes{countOnesInBinary(n)};

  int next_smallest = n + 1;
  while (countOnesInBinary(next_smallest) != countOnes)
    next_smallest++;

  int prev_largest = n - 1;
  while (countOnesInBinary(prev_largest) != countOnes)
    prev_largest--;

  return { next_smallest, prev_largest };
}