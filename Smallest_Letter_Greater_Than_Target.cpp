/*
Leetcode Solution
Problem No : 744
Problem Name : Find Smallest Letter Greater Than Target
Difficulty : Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0, high = letters.size() - 1;
        char ans = letters[0];

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (letters[mid] > target) {
                ans = letters[mid];
                high = mid - 1;
            } 
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};

int main() {
    Solution s;
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'a';

    cout << s.nextGreatestLetter(letters, target) << endl;
    return 0;
}
