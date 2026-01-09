/*
Leetcode Solution
Problem No : 268
Problem Name : Missing Number
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = n * (n + 1) / 2;

        int sum = 0;
        for (int x : nums) {
            sum += x;
        }

        return total - sum;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, 0, 1};

    cout << s.missingNumber(nums) << endl;
    return 0;
}
