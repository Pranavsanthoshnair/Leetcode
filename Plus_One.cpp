/*
Leetcode Solution
Problem No : 66
Problem Name : Plus One
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main() {
    Solution s;
    vector<int> digits = {9, 9, 9};

    vector<int> result = s.plusOne(digits);

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
