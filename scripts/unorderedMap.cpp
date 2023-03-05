
/*For each integer  in the inclusive interval :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd". */




#include <iostream>
#include <cstdio>
#include<map>
using namespace std;

int main() {
    int s;
    int c;
    cin >> s >> c;
    for (int i = s; i <= c; i++) {

        if (i <= 9) {
            auto st = std::to_string(i);
            std::map<std::string, std::string> Numbers;

            Numbers["1"] = "one";
            Numbers["2"] = "two";
            Numbers["3"] = "three";
            Numbers["4"] = "four";
            Numbers["5"] = "five";
            Numbers["6"] = "six";
            Numbers["7"] = "seven";
            Numbers["8"] = "eight";
            Numbers["9"] = "nine";
            cout << Numbers[st] << endl;
        }
        if (i > 9) {
            double remainder = i % 2;
            if (remainder == 0) { cout << "even" << endl; }
            else { cout << "odd" << endl; }
        }
    }
    return 0;
}