#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        double a, b;
        cin >> a >> b;
        if (b == 0)
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            double result = a / b;
            cout << fixed << setprecision(1) << result << endl;
        }
    }
    return 0;
}