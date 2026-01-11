/*
Leetcode Solution
Problem No : 9
Problem Name : Palindrome Number
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int temp = x;
        long rev = 0;

        while (x > 0) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }

        return temp == rev;
    }
};
