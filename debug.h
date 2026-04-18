#pragma once
// ========================================================== //
#ifdef SHANTO
    #define debug(x) cerr<<#x;cerr<<" ";_printn(x);cerr<<"\n";
    #define debg() cerr<<"\n";
#else
    #define debug(x)
    #define debg()
#endif

void _printn(long long int x){ cerr<<x<<" "; }
void _printn(int x){ cerr<<x<<" "; }
void _printn(long double x){ cerr<<x<<" "; }
void _printn(double x){ cerr<<x<<" "; }
void _printn(std::string x){ cerr<<x<<" "; }
void _printn(char x){ cerr<<x<<" "; }
void _printn(bool x){ cerr<<x<<" "; }
template<class T,class V>void _printn(std::pair<T,V> vv);
template<class T> void _printn(std::vector<T> vv);
template<class T> void _printn(std::set<T> vv);
template<class T,class V> void _printn(std::map<T,V> vv);
template<class T> void _printn(std::multiset<T> vv);
template<class T,class V>void _printn(std::pair<T,V> vv){ cerr<<"( ";_printn(vv.first);cerr<<",";_printn(vv.second);cerr<<")";}
template<class T> void _printn(std::vector<T> vv){ cerr<<"[ "; for(auto xx:vv){ _printn(xx);cerr<<" "; } cerr<<"]"; };
template<class T> void _printn(std::set<T> vv){ cerr<<"{ "; for(auto xx:vv){ _printn(xx);cerr<<" "; } cerr<<"}"; };
template<class T> void _printn(std::multiset<T> vv){ cerr<<"{ "; for(auto xx:vv){ _printn(xx);cerr<<" "; } cerr<<"}"; };
template<class T,class V> void _printn(std::map<T,V> vv){ cerr<<"{ "; for(auto xx:vv){ _printn(xx);cerr<<" "; } cerr<<"}"; };
// ========================================================== //