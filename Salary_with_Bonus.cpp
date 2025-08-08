#include <bits/stdc++.h>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    string name;
    double total_salary, m15, salary;
    cin >> name;
    cin >> total_salary >> m15;
    double after15 = (m15 * 15) / 100;
    salary = after15 + total_salary;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salary << endl;

    return 0;
}