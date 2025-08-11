#include <bits/stdc++.h>
using namespace std;

int checkPerfect(int number)
{
    int total = 0; 
    for (int i = 1; i <= number / 2; i++) 
    {
        if (number % i == 0)
        {
            total += i;
        }
    }
    return total;
}

int main()
{
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int num;
        cin >> num;
        if (checkPerfect(num) == num)
        {
            cout << num << " eh perfeito" << endl;
        }
        else
        {
            cout << num << " nao eh perfeito" << endl;
        }
    }
    return 0;
}