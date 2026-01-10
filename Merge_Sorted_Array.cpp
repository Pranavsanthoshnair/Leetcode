/*
Leetcode Solution
Problem No : 88
Problem Name : Merge Sorted Array
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};

int main() {
    Solution s;

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3, n = 3;

    s.merge(nums1, m, nums2, n);

    for (int x : nums1) {
        cout << x << " ";
    }

    return 0;
}
