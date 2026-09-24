#include <bits/stdc++.h>
using namespace std;

/*
Problem: Compare the Triplets
Platform: HackerRank

Approach:
Compare the corresponding elements of the two triplets.
Increment Alice's score when a[i] is greater and Bob's score
when b[i] is greater.

Time Complexity: O(1)
Space Complexity: O(1)
*/

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice = 0;
    int bob = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            alice++;
        }
        else if (a[i] < b[i]) {
            bob++;
        }
    }

    return {alice, bob};
}

int main() {
    vector<int> a(3);
    vector<int> b(3);

    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }

    vector<int> result = compareTriplets(a, b);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}