#include <iostream>
using namespace std;

int main()
{
    int totalSeconds;
    cin >> totalSeconds;

    int hours = totalSeconds / 3600;
    int remainingSeconds = totalSeconds % 3600;

    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;

    return 0;
}
