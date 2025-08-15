#include <iostream>
using namespace std;

int main() {
    srand(time(0)); // initializing the random number generator
    
    // init var
    bool heads = ((rand() % 2) == 1 ? true : false);
    cout << (heads ? "heads!" : "tails!"); // printing answer
    
    return 0;
}
