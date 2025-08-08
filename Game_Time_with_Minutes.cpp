#include <bits/stdc++.h>
using namespace std;
int main()
{
    float sHours, sMinutes;
    float eHours, eMinutes;
    cin >> sHours >> sMinutes;
    cin >> eHours >> eMinutes;
    int startTotal = sHours * 60 + sMinutes;
    int endTotal = eHours * 60 + eMinutes;
    int durationMint;
    if (endTotal > startTotal)
    {
        durationMint = endTotal - startTotal;
    }
    else if (endTotal == startTotal)
    {
        durationMint = 24 * 60;
    }
    else
    {
        durationMint = (24 * 60 - startTotal) + endTotal;
    }
    int hours = durationMint / 60;
    int minutes = durationMint % 60;

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;
    return 0;
}