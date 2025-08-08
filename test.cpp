#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    double num;
    double sum = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> num;
        if (num > 0)
        {
            count++;
            sum = sum + num;
        }
    }

    double average = sum / count;

    cout << count << " valores positivos" << endl;
    cout << average << endl;

    return 0;
}