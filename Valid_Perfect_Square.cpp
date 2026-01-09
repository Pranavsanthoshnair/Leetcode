/*
Leetcode Solution
Problem No : 367
Problem Name : Valid Perfect Square
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long low = 1, high = num;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long sq = mid * mid;

            if (sq == num) {
                return true;
            } 
            else if (sq < num) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }

        return false;
    }
};

int main() {
    Solution s;
    int num = 16;
    cout << s.isPerfectSquare(num) << endl; // 1 for true, 0 for false
    return 0;
}
