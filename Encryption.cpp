#include <bits/stdc++.h>
using namespace std;

int main() {
    int tCase;
    cin >> tCase;
    cin.ignore();

    while (tCase--) {
        string line;
        getline(cin, line);

        for (char &c : line) {
            if (isalpha(c)) {
                c = c + 3;
            }
        }
        reverse(line.begin(), line.end());

        int half = line.size() / 2;
        for (int i = half; i < (int)line.size(); i++) {
            line[i] = line[i] - 1;
        }

        cout << line << endl;
    }

    return 0;
}
