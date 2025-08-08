#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int PA, PB;
        float G1, G2;
        cin >> PA >> PB >> G1 >> G2;
        int years_count = 0;
        while (years_count <= 100)
        {
            if (PA <= PB)
            {
                PA = PA + (PA * G1) / 100;
                PB = PB + (PB * G2) / 100;
                years_count++;
            }
            else
            {
                break;
                return 0;
            }
        }
        if (years_count > 100)
        {
            cout << "Mais de 1 seculo." << endl;
        }
        else
        {
            cout << years_count << " anos." << endl;
        }
    }
    return 0;
}