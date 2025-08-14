#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tCase;
    cin >> tCase;
    vector<int> led = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while (tCase--)
    {
        string number;
        cin >> number;
        int total = 0;
        for (char c : number)
        {
            total += led[c - '0'];
        }
        cout << total << " leds\n";
    }
    return 0;
}