#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

//*find_by_order
//order_of_key
template <typename T> using ordered_set =
tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset =
tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

//DEBUG
#ifndef ONLINE_JUDGE
#include "Shiva.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
//END

const int mod=1e9+7; 
#define TEST int T;cin>>T;cin.ignore();while(T--)
#define skip continue
#define pb push_back 
#define pf push_front
#define ppb pop_back 
#define ppf pop_front
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define cl cout<<"\n";
#define ll long long
#define int long long                      /*Shiva*/
#define ull unsigned ll
#define ld long double
#define endl "\n"
#define ff first
#define ss second
#define inf LLONG_MAX
#define all(l) l.begin(),l.end()
#define rall(l) l.rbegin(),l.rend()
#define __bp(x) __builtin_popcountll(x)
#define rev(l) reverse(l.begin(),l.end())
#define rsort(l) sort(l.rbegin(),l.rend())
#define Cout(x) cout<<((x)?"YES\n":"NO\n");
#define sum(l) accumulate(l.begin(),l.end(),0LL)
#define vecin(l,n) vector<int>l(n);for(int &Ele:l){cin>>Ele;}
#define vecin1(l,n) vector<int>l(n+1);for(int Ele=1;Ele<=n;Ele++){cin>>l[Ele];}
#define vecinp(l,n,d) vector<d>l(n);for(auto &Ele:l){cin>>Ele;}
#define iShowSpeed ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define CerrTime cerr<<"Time : "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<" ms\n";

//Functions
template<class T>map<T,int> Counter(vector<T>&l){map<T,int>d;for(T &i:l){d[i]++;}return d;}
map<char,int> Counter(string &s){map<char,int>d;for(char &i:s){d[i]++;}return d;}
string reverse(string &s){string s1(rall(s));return s1;}
template<class T>void sort(T &l){sort(begin(l),end(l));}
bool isprime(int n){if(n<=1){return false;}if(n<=3){return true;}if(n%2==0 || n%3==0){return false;}for
(int i=5;i*i<=n;i+=6){if(n%i==0 || n%(i+2)==0){return false;}}return true;}
string genStr(int n,auto s){string s1;for(int i=0;i<n;i++)s1+=s;return s1;}
template<class T> T __lcm(T a,T b){return (a*(b/__gcd(a,b)));}
template<class T> auto max(T &l){return *max_element(all(l));}
template<class T> auto min(T &l){return *min_element(all(l));}
template<class T>void printl(T &l,string sep=" "){for(auto &i:l){cout<<i<<sep;}}
template<class T>void minmax(T &a,T &b){if(a>b)swap(a,b);}
string bin(int n){return bitset<128>(n).to_string();}
string bit(int n){if(n==0)return "0";string t=bitset<64>(n).to_string();return t.substr(t.find('1'));}
int b2d(string s){int ans=0;for(int i=s.size()-1,j=0;i>=0;i--,j++){if(s[i]=='1') ans+=(1ll<<j);}return ans;} 
/*********************************************************************************************************************************/
void Shiva() {

}
signed main() {
#ifndef ONLINE_JUDGE
    freopen("error.txt","w",stderr);
#endif
    // iShowSpeed;
    // TEST        
    Shiva();
    // CerrTime;
}
