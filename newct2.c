#include <stdio.h>

int main() {
    int a = 20;
    int b = 5;
    int c = --a + b++;
    int d = c++ - a; 

    printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
    // output a=19 b=6 c=25 d=5

    return 0;
}
