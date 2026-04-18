#include <iostream>
#include <random>
#include <chrono>
using namespace std;

int main() {
    // A high-quality random number generator
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    
    // Generate an array size 'n' between 1 and 5
    int n = uniform_int_distribution<int>(1, 5)(rng);
    cout << n << "\n";
    
    for(int i = 0; i < n; i++) {
        // Generate random array elements between -10 and +10
        cout << uniform_int_distribution<int>(-10, 10)(rng) << " ";
    }
    cout << "\n";
    return 0;
}