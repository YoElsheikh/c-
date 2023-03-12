#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

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
