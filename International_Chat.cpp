#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int lang;
        cin >> lang;
        cin.ignore();
        set<string> langs;
        for (int i = 0; i < lang; i++)
        {
            string lang;
            getline(cin, lang);
            langs.insert(lang);
        }

        if (langs.size() == 1)
        {
            cout << *langs.begin() << "\n";
        }
        else
        {
            cout << "ingles\n";
        }
    }
    return 0;
}