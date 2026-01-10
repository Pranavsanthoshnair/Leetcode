/*
Leetcode Solution
Problem No : 349
Problem Name : Intersection of Two Arrays
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        vector<int> ans;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                ans.push_back(nums1[i]);

                int val = nums1[i];
                while (i < nums1.size() && nums1[i] == val) i++;
                while (j < nums2.size() && nums2[j] == val) j++;
            }
            else if (nums1[i] < nums2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = s.intersection(nums1, nums2);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
