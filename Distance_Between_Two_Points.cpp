#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    float sum = pow((x2 - x1), 2) + pow((y2 - y1), 2);
    float result = sqrt(sum);
    cout << fixed << setprecision(4) << result << endl;

    return 0;
}