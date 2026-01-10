/*
Leetcode Solution
Problem No : 977
Problem Name : Squares of a sorted array
Difficulty : Easy
*/

// Solution 1

/*
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int &x : nums) {
            x = x * x;
        }

        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main() {
    Solution s;
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> result = s.sortedSquares(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}

*/

// Solution 2

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;
        int pos = n - 1;

        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                ans[pos] = nums[left] * nums[left];
                left++;
            } else {
                ans[pos] = nums[right] * nums[right];
                right--;
            }
            pos--;
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {-4, -1, 0, 3, 10};

    vector<int> result = s.sortedSquares(nums);

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
}
