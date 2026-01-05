/*
Leetcode Solution
Problem No : 33
Problem Name : Search in rotated Sorted Array
Difficulty : Medium
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st = 0, end = A.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid] == tar) {
                return mid;
            }

            // Left half is sorted
            if (A[st] <= A[mid]) {
                if (A[st] <= tar && tar <= A[mid]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            }
            // Right half is sorted
            else {
                if (A[mid] <= tar && tar <= A[end]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main() {
    vector<int> A = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    Solution obj;
    int result = obj.search(A, target);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
