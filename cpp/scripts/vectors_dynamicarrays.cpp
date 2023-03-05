// stack-allocated array, i.e. an array that exits in the stack and not the heap 
/*
#include<iosream>

int main()
{
	int array[5];
	// memory allocation occurs in the heap (new keyword) and we're explicitly using a pointer to address it 
	// we can use a variable size, say size = 5;, and int* heapArray = new int[size] (i.e. dynamic allocation), whereas this is not possible
	// with our previous array, i.e. array[size]; will throw an error, as the memory to be allocated for array needs to be known
	// at compile time
	int* heapArray = new int[5]; 
}
*/

// We operate under the assumption that we need a dynamic array that takes in data/changes in size
// say, in response to adding elements from some output or from the user's input 

#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

int main()
{
	std::vector<Vertex> vertices;
	vertices.push_back({ 1, 2, 3 }); // as there's no constructor to the Vertex class we use an "initializer list" that is within {}
	vertices.push_back({ 4, 5, 6 }); // push_back adds elements 
	
	for (int i = 0; i < vertices.size(); i++) // looping to pring the dynamic array
		std::cout << vertices[i] << std::endl;

	for (Vertex v : vertices) // variant to the full for loop; similar to python for elem in array, or for v in vertices but just defining the type "Vertices" beforehand
		std::cout << v << std::endl; 

	std::cin.get();
}