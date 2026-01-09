/*
Leetcode Solution
Problem No : 704
Problem Name : Binary Search
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 5;

    cout << s.search(nums, target) << endl;
    return 0;
}
