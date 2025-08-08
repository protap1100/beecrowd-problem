#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            break;
        }
        if (a < b)
        {
            cout << "Crescente" << endl;
        }
        else
        {
            cout << "Decrescente" << endl;
        }
    }
    return 0;
}
