/*
Leetcode Solution
Problem No : 35
Problem Name : Search Insert Position
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }

        return low;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;

    cout << s.searchInsert(nums, target) << endl;
    return 0;
}
