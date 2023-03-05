// class templates is a class that represents a potential family of classes 
// for instance, if we have a class that contains a code that fills an array with int values for instance
// and then we need to use the same code of that class, but filling the array with string values 
// we will need to duplicate the code, to avoid this we create a generic class that serves as a template class
// through which only ***** is changed 

#include <iostream>
#include <string>

using namespace std;
class IntArrary
{
public:

    int array[10];
    void fill(int value)
    {
        for (int i; i < 10; i++)
            array[i] = value;
    }
    // write another function that will return
    // the value at a cetain index using a reference int&
    int& at(int index)
    {
        return array[index];
    }
};
// now we have to duplicate the same above code if we wanted the array to be a string type
class StringArrary
{
public:

    string array[10];
    void fill(string value)
    {
        for (int i; i < 10; i++)
            array[i] = value;
    }
    // write another function that will return
    // the value at a cetain index using a reference int&
    string& at(int index)
    {
        return array[index];
    }
};

// instead of duplication we can use a template that standardizes parts of our code and changes other parts as specified during compile time


#include <iostream>
#include <string>

using namespace std;

template<typename T, int length>
class Array
{
public:
    T array[10];
    void fill(T value)
    {
        for (int i; i < length; i++)
            array[i] = value;
    }
    // write another function that will return
    // the value at a cetain index using a reference int&
    T& at(int index)
    {
        return array[index];
    }
};

// call the template in int main()

int main()
{
    // define the strin and the length in the template
    Array<string, 10> strgArray;
    // fill the array with our fill method defined in the Array class
    strgArray.fill("123");
    cout << strgArray.at(4) << endl;

    Array<int, 8> intArray;
    intArray.fill(123);
    intArray.at(6) = 1234;

    for (int i = 0; i < 8; i++)
        cout << "intArray[" << i << "]: " << intArray.at(i) << endl;

    return 0;
}