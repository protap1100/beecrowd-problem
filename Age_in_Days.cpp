#include <iostream>
using namespace std;

int main()
{
    int days;
    cin >> days;
    int year, month, day;
    year = days / 365;
    int remDays = days % 365;
    month = remDays / 30;
    remDays = remDays % 30;
    day = remDays / 7;
    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << remDays << " dia(s)" << endl;

    return 0;
}
