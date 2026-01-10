/*
Leetcode Solution
Problem No : 283
Problem Name : Move Zeroes
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                nums[i] = nums[j];
                i++;
            }
        }

        while (i < nums.size()) {
            nums[i] = 0;
            i++;
        }
    }
};

int main() {
    Solution s;
    vector<int> nums = {0, 1, 0, 3, 12};

    s.moveZeroes(nums);

    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
