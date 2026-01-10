/*
Leetcode Solution
Problem No : 167
Problem Name : Two Sum II - Input Array Is Sorted
Difficulty : Medium
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};

int main() {
    Solution s;
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = s.twoSum(numbers, target);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
