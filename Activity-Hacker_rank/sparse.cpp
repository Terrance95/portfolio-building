#include <bits/stdc++.h>
using namespace std;

/*
Problem: Sparse Arrays
Platform: HackerRank

Approach:
Store the frequency of every string in an unordered_map.
For each query, directly retrieve its frequency from the map.

Time Complexity: O(N + Q)
Space Complexity: O(N)
*/

vector<int> matchingStrings(vector<string> stringList,
                            vector<string> queries) {
    unordered_map<string, int> frequency;

    for (const string& str : stringList) {
        frequency[str]++;
    }

    vector<int> result;

    for (const string& query : queries) {
        result.push_back(frequency[query]);
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<string> stringList(n);

    for (int i = 0; i < n; i++) {
        getline(cin, stringList[i]);
    }

    int q;
    cin >> q;
    cin.ignore();

    vector<string> queries(q);

    for (int i = 0; i < q; i++) {
        getline(cin, queries[i]);
    }

    vector<int> result = matchingStrings(stringList, queries);

    for (int answer : result) {
        cout << answer << '\n';
    }

    return 0;
}