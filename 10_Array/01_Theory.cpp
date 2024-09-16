// Arrays:-

// In C++ std::array is a container that encapsulates fixed size arrays. In C++, array index starts from 0. We can store only fixed set of elements in C++ array.

// A collection of related data items stored in adjacent memory places is referred to as an array in the C/C++ programming language or any other programming language for that matter. Elements of an array can be accessed arbitrarily using its indices. They can be used to store a collection of any type of primitive data type, including int, float, double, char, etc. An array in C/C++ can also store derived data types like structures, pointers, and other data types, which is an addition. The array representation in a picture is provided below.



// C++ Array Types
// There are 2 types of arrays in C++ programming:

// Single Dimensional Array
// Multidimensional Array



// C++ Single Dimensional Array
// Let's see a simple example of C++ array, where we are going to create, initialize and traverse array.

#include <iostream>  
using namespace std;  
int main()  
{  
 int arr[5]={10, 0, 20, 0, 30};  //creating and initializing array    
        //traversing array    
        for (int i = 0; i < 5; i++)    
        {    
            cout<<arr[i]<<"\n";    
        }    
}  




// C++ Passing Array to Function
// In C++, to reuse the array logic, we can create function. To pass array to function in C++, we need to provide only array name


