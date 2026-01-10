/*
Leetcode Solution
Problem No : 724
Problem Name : Find Pivot Index
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for (int x : nums) {
            totalSum += x;
        }

        int leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            leftSum += nums[i];
        }

        return -1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int pivot = s.pivotIndex(nums);
    cout << pivot << endl;

    return 0;
}
