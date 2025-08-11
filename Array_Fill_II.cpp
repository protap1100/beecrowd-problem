#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int arr[1000];
    for (int i = 0; i < 1000; i++)
    {
        arr[i] = i % number;
    }
    for (int j = 0; j < 1000; j++)
    {
        cout << "N[" << j << "] = " << arr[j] << endl;
    }
    return 0;
}