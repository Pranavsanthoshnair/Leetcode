/*
Leetcode Solution
Problem No : 69
Problem Name : Sqrt(x)
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int low = 1, high = x;
        int ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (mid * mid == x) {
                return mid;
            }
            else if (mid * mid < x) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution s;
    int x = 8;
    cout << s.mySqrt(x) << endl;
    return 0;
}
