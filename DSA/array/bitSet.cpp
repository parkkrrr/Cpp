/**
 * You are given a sequence of only digits in the form of a string 'DIGIT_PATTERN', your task is to find the first repeating digit. If no digit is repeating you should return -1.
Example:
Given string of digits is 123456325. Now starting from the left, the first digit which is repeating is 3 as till 2nd 3 every digit is encountered 1st time and thus our answer for this input will be 3.

*/

#include <bits/stdc++.h>
int findFirstRepeatingDigit(string digitPattern)
{
    // Write your code here.
    int arr[10]{};
    for (int i = 0; i < digitPattern.size(); i++)
    {
        int x = digitPattern[i] - '0';
        arr[x]++;
        if (arr[x] > 1)
            return x;
    }
    return -1;
}