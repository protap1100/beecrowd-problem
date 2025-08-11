#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int arr[10];
    arr[0] = number;
    for (int i = 1; i < 10; i++)
    {
        arr[i] = arr[i - 1] * 2;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}