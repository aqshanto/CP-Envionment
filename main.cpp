#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#include "debug.h"

void setIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr); 
    #endif
}

const int mx = 500005;

void solve() {
    int k,n;
    cin >> n >> k; 
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    map<int,int>mp;
    int lo = 0, hi = 0, cnt = 0, mx = 0,anslo  = lo, anshi = hi;
    while(lo<n && hi < n){
        // cout << lo << " " << hi << "\n";
        if(mp[v[hi]]==0)cnt++;
        mp[v[hi]]++;
        hi++;
        if(cnt<=k){
            int val = hi - lo;
            // cout << val << "\n";
            if(val>mx){
                anslo = lo+1;
                anshi = hi;
                mx = val;
            }
        }
        if(cnt>k){
            mp[v[lo]]--;
            if(mp[v[lo]]==0)cnt--;
            lo++;
        }
    }
    if(cnt==k){
        int val = hi - lo;
        if(val>mx){
            anslo = lo+1;
            anshi = hi;
        }
    }
    cout << anslo << " "<< anshi << "\n";
}

int main() {
    setIO();
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());    
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    
    cerr << "Time elapsed: " << setprecision(6) << 1000.0 * clock() / CLOCKS_PER_SEC << "ms\n";
    return 0;
}