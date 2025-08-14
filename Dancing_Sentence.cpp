#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentences;
    while (getline(cin, sentences))
    {
        bool uppercase = true;
        for (int i = 0; i < sentences.size(); i++)
        {
            char c = sentences[i];
            if (c == ' ')
                continue;
            if (uppercase)
            {
                sentences[i] = toupper(c);
            }
            else
            {
                sentences[i] = tolower(c);
            }
            uppercase = !uppercase;
        }
        cout << sentences << endl;
    }
    return 0;
}