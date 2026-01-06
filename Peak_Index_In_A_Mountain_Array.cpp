/*
Leetcode Solution
Problem No : 852
Problem Name : Peak Index in a Mountain Array
Difficulty : Medium
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 1, end = A.size() - 2;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) {
                return mid;
            } else if (A[mid - 1] < A[mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> A = {0, 2, 5, 3, 1};
    Solution obj;
    cout << obj.peakIndexInMountainArray(A);
    return 0;
}
