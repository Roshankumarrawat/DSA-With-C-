// Vectors
// In C++, vectors are used to store elements of similar data types. However, unlike arrays, the size of a vector can grow dynamically.

// That is, we can change the size of the vector during the execution of a program as per our requirements.

// Vectors are part of the C++ Standard Template Library. To use vectors, we need to include the vector header file in our program.






#include <iostream>
#include <vector>
using namespace std;

int main() {

  // initializer list
  vector<int> vector1 = {1, 2, 3, 4, 5};

  // uniform initialization
  vector<int> vector2{6, 7, 8, 9, 10};

  // method 3
  vector<int> vector3(5, 12);

  cout << "vector1 = ";

  // ranged loop
  for (const int& i : vector1) {
    cout << i << "  ";
  }

  cout << "\nvector2 = ";

  // ranged loop
  for (const int& i : vector2) {
    cout << i << "  ";
  }

  cout << "\nvector3 = ";

  // ranged loop
  for (int i : vector3) {
    cout << i << "  ";
  }

  return 0;
}