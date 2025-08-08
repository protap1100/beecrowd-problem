#include <iostream>
using namespace std;

int main() {
    int tCase;
    cin >> tCase;

    while (tCase--) {
        int X, Y;
        cin >> X >> Y;
        if (X % 2 == 0) {
            X++;
        }

        int sum = 0;
        for (int i = 0; i < Y; i++) {
            sum += X;
            X += 2; 
        }

        cout << sum << endl;
    }

    return 0;
}
