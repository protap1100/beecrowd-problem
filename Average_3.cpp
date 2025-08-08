#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    a = a * 2;
    b = b * 3;
    c = c * 4;
    d = d * 1;
    float average = (a + b + c + d) / 10;
    cout << fixed << setprecision(1) << "Media: " << average << endl;
    if (average >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (average < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else
    {
        cout << "Aluno em exame." << endl;
        float e;
        cin >> e;
        cout << fixed << setprecision(1) << "Nota do exame: " << e << endl;
        float media_final = (e + average) / 2;
        if (media_final >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << media_final << endl;
    }

    return 0;
}
