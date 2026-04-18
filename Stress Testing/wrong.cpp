#include <iostream>
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    int max_val = 0; // THE BUG! (Assumes the answer will always be > 0)
    
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