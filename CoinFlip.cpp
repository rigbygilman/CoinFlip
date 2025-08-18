#include <iostream>
using namespace std;

int main() {
    srand(time(0)); // initializing the random number generator
    
    bool heads = ((rand() % 2) == 1); // init var
    cout << (heads ? "heads!" : "tails!"); // printing answer
    
    return 0;
}
