#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double value;
    cin >> value;

    int total = round(value * 100);

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        int count = total / notes[i];
        total %= notes[i];
        printf("%d nota(s) de R$ %.2f\n", count, notes[i] / 100.0);
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        int count = total / coins[i];
        total %= coins[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins[i] / 100.0);
    }

    return 0;
}
