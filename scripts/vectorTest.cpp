
#include <iostream>
#include <string>
#include <vector>


int main()
{
    double a;
    int Size;
    std::cin >> Size;

    std::vector<double> array(Size);

    for (int i = 0; i < Size; i++)
    {
        std::cin >> a;
        array.push_back(a);
    }

    for (double pos : array)
    {
        std::cout << pos << " ";
    }

    // for (int pos : array)
     //    std::cout << pos << std::endl;

    return 0;
}