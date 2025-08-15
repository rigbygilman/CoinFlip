#include <iostream>
#include <string>
using namespace std;

int main() {
    srand(time(0)); // initializing the random number generator
    
    // init vars
    int num = (rand() % 2); // 1 is heads, 0 is tails
    bool heads; 
    
    // cheking if its heads or not
    if (num == 1) heads = true;
    else heads = false;
    
    cout << (heads ? "heads!" : "tails!"); // printing answer
    return 0;
}
