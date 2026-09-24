#include <bits/stdc++.h>
using namespace std;

/*
Problem: Dynamic Array
Platform: HackerRank

Approach:
Maintain n dynamic sequences. For every query, calculate the
sequence index using XOR between x and lastAnswer.

Type 1:
Append y to the selected sequence.

Type 2:
Retrieve the element at position y % sequence_size,
update lastAnswer, and store it in the result.

Time Complexity: O(N + Q)
Space Complexity: O(N)
*/

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> seqList(n);
    vector<int> result;

    int lastAnswer = 0;

    for (const auto& query : queries) {
        int type = query[0];
        int x = query[1];
        int y = query[2];

        int index = (x ^ lastAnswer) % n;

        if (type == 1) {
            seqList[index].push_back(y);
        }
        else if (type == 2) {
            int size = seqList[index].size();

            lastAnswer = seqList[index][y % size];

            result.push_back(lastAnswer);
        }
    }

    return result;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> queries(q, vector<int>(3));

    for (int i = 0; i < q; i++) {
        cin >> queries[i][0]
            >> queries[i][1]
            >> queries[i][2];
    }

    vector<int> result = dynamicArray(n, queries);

    for (int answer : result) {
        cout << answer << '\n';
    }

    return 0;
}