#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int sum = 0;
    int start = min(x, y);
    int end = max(x, y);

    for (int i = start; i <= end; i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }

    cout << sum << endl;
    return 0;
}