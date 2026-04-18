#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    int max_val = -1000000; // Perfect starting point
    
    for(int i = 0; i < n; i++) {
        int x; 
        cin >> x;
        if(x > max_val) {
            max_val = x;
        }
    }
    
    cout << max_val << "\n";
    return 0;
}