#include <bits/stdc++.h>
using namespace std;

/*
Problem: Time Conversion
Platform: HackerRank

Approach:
Extract the AM/PM period and convert the hour according to
12-hour to 24-hour time rules.

Time Complexity: O(1)
Space Complexity: O(1)
*/

string timeConversion(string s) {
    string period = s.substr(8, 2);
    int hour = stoi(s.substr(0, 2));

    if (period == "AM") {
        if (hour == 12) {
            hour = 0;
        }
    }
    else {
        if (hour != 12) {
            hour += 12;
        }
    }

    stringstream ss;
    ss << setw(2) << setfill('0') << hour;

    return ss.str() + s.substr(2, 6);
}

int main() {
    string s;
    cin >> s;

    cout << timeConversion(s) << endl;

    return 0;
}