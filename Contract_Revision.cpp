#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int D;
        string N;
        cin >> D >> N;

        if (D == 0 && N == "0") break;

        char broken = D + '0';
        string result = "";

        for (char c : N) {
            if (c != broken) result += c;
        }

        int i = 0;
        while (i < result.size() && result[i] == '0') i++;
        result = result.substr(i);

        if (result == "") result = "0";

        cout << result << "\n";
    }
    return 0;
}
