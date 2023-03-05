#include <sstream>
#include <vector>
#include <iostream>
using namespace std;


/*
    // we create a string stream object "ss" 
    // then we parse our string inside of it using the operator >>
    // and then write this value to a new variable of the string type
int main()
{
    int Intiger = 50;
   	stringstream ss;
   	ss << Intiger; // parse the intiger into the stream
   	string String;
   	ss >> String; // the values of Intiger are parsed back into String
   	cout << String << endl;
   	// this works vice versa, from string to intiger as well.
   	
}
*/




int main()
{
    std::string str;
    std::cin >> str;
    std::vector<int> vect;

    std::stringstream ss(str);

    for (int i; ss >> i;) {
        vect.push_back(i);    
        if (ss.peek() == ',')
            ss.ignore();
    }

    for (int i = 0; i < vect.size(); i++)
        std::cout << vect[i] << std::endl;
}