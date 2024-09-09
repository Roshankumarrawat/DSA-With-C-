// The while loop is used when the number of iterations is not known in advance and the loop should continue as long as the condition is true.

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << "Iteration: " << i << endl;
        i++;
    }
    return 0;
}
 