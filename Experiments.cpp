#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tCase;
    cin >> tCase;
    int total = 0;
    int cobaias = 0, ratos = 0, sapos = 0;
    while (tCase--)
    {
        int number;
        char alp;
        cin >> number;
        cin >> alp;
        total = number + total;

        if (alp == 'C')
        {
            cobaias = cobaias + number;
        }
        else if (alp == 'R')
        {
            ratos = ratos + number;
        }
        else
        {
            sapos = sapos + number;
        }
    }
    float cp = (100.00 * cobaias) / total,
          rp = (100.00 * ratos) / total,
          sp = (100.00 * sapos) / total;

    cout << "Total: " << total << " cobaias" << endl
         << "Total de coelhos: " << cobaias << endl
         << "Total de ratos: " << ratos << endl
         << "Total de sapos: " << sapos << endl;

    cout << "Percentual de coelhos: " << fixed << setprecision(2) << cp << " %" << endl
         << "Percentual de ratos: " << fixed << setprecision(2) << rp << " %" << endl
         << "Percentual de sapos: " << fixed << setprecision(2) << sp << " %" << endl;

    return 0;
}