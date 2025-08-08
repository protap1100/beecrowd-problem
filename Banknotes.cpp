#include <iostream>
using namespace std;

int main()
{
    int taka;
    cin >> taka;
    cout << taka << endl;
    int n100, n50, n20, n10, n5, n2, n1;
    n100 = taka / 100;
    int remTaka = taka % 100;
    n50 = remTaka / 50;
    remTaka = remTaka % 50;
    n20 = remTaka / 20;
    remTaka = remTaka % 20;
    n10 = remTaka / 10;
    remTaka = remTaka % 10;
    n5 = remTaka / 5;
    remTaka = remTaka % 5;
    n2 = remTaka / 2;
    remTaka = remTaka % 2;
    n1 = remTaka / 1;
    remTaka = remTaka % 1;
    cout << n100 << " nota(s) de R$ 100,00" << endl;
    cout << n50 << " nota(s) de R$ 50,00" << endl;
    cout << n20 << " nota(s) de R$ 20,00" << endl;
    cout << n10 << " nota(s) de R$ 10,00" << endl;
    cout << n5 << " nota(s) de R$ 5,00" << endl;
    cout << n2 << " nota(s) de R$ 2,00" << endl;
    cout << n1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
