
// this code takes in data specified in a single line, changes the data (float precision for example) and prints each in a new line
// Some C++ data types, their format specifiers, and their most common bit widths are as follows :

/*
Int("%d") : 32 Bit integer
Long("%ld") : 64 bit integer
Char("%c") : Character type
Float("%f") : 32 bit real value
Double("%lf") : 64 bit real value
*/

#include <iostream>
#include <cstdio>
using namespace std;

// Format is typically: %[flags][width][.precision][length]specifier, so for example, %.20f

int main() {
    int a;
    long b;
    char ch;
    double d;
    double d2;
    scanf("%d %ld %c %lf %lf", &a, &b, &ch, &d, &d2);
    printf("%d \n%ld \n%c \n%lf \n%lf", a, b, ch, d, d2);
    return 0;
}