#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    a = a * 4;
    for (int i = 1; i <= a; i++)
    {
        if (i % 4 == 0)
        {
            cout << "PUM" << endl;
        }
        else
        {
            cout << i << " ";
        }
    }
    return 0;
}