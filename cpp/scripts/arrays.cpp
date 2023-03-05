/*
// Header Files
#include <iostream>


using namespace std;

void readInput()
{
    for (int i = 0; i < n; i++)
    {
        cin >> arrayy[i];
    }
}

void printRev()
{
    for (int i = n; i-- > 0;)
    {
        cout << arrayy[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arrayy[n];

    readInput();
    printRev();
    return 0;
}
*/

// Header Files
#include <iostream>


using namespace std;

int main() {
    // declaring sales array in C
    int n;
    cin >> n;
    int sales[n];

    int i; // Variable for access sales array index


    for (i = 0; i < n; i++) {
        cin >> sales[i];
    }

    for (i = n; i-- > 0;) {
        cout << sales[i] << " ";
    }

    return 0;
}