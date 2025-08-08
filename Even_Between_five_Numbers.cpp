#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    int num;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        if (num % 2 == 0)
        {
            count++;
        }
    }


    cout << count << " valores pares" << endl;

    return 0;
}