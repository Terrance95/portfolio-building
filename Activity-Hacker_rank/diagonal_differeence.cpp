#include <bits/stdc++.h>
using namespace std;

/*
Problem: Diagonal Difference
Platform: HackerRank

Approach:
Calculate the sum of the primary diagonal and secondary diagonal
in a single traversal, then return their absolute difference.

Time Complexity: O(N)
Space Complexity: O(1)
*/

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();

    int primaryDiagonal = 0;
    int secondaryDiagonal = 0;

    for (int i = 0; i < n; i++) {
        primaryDiagonal += arr[i][i];
        secondaryDiagonal += arr[i][n - 1 - i];
    }

    return abs(primaryDiagonal - secondaryDiagonal);
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << diagonalDifference(arr) << endl;

    return 0;
}