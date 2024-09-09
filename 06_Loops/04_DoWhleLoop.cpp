// The do-while loop is similar to the while loop, but it guarantees that the loop body is executed at least once because the condition is evaluated after the loop body.


#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        cout << "Iteration: " << i << endl;
        i++;
    } while (i < 5);
    return 0;
}
