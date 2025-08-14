#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tCase;
    cin >> tCase;
    while (tCase--)
    {
        int student;
        cin >> student;
        vector<string> sName(student);
        vector<string> attendence(student);

        for (int i = 0; i < student; i++)
        {
            cin >> sName[i];
        }
        for (int i = 0; i < student; i++)
        {
            cin >> attendence[i];
        }

        vector<string> rejectList;

        for (int i = 0; i < student; i++)
        {
            int A = 0;
            int P = 0;
            int M = 0;

            for (int j = 0; j < attendence[i].size(); j++)
            {
                if (attendence[i][j] == 'A')
                {
                    A++;
                }
                else if (attendence[i][j] == 'P')
                {
                    P++;
                }
                else
                {
                    M++;
                }
            }
            int totalPresentDays = attendence[i].size() - M;
            float percentage = (P * 100.0) / totalPresentDays;
            if (percentage < 75.0)
            {
                rejectList.push_back(sName[i]);
            }
        }
        for (int i = 0; i < rejectList.size(); i++)
        {
            cout << rejectList[i];
            if (i != rejectList.size() - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}