#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#ifndef ONLINE_JUDGE 
#include "template.cpp"
#else
  #define debug(...) 
  #define debugArr(...)
#endif
using namespace __gnu_pbds;
template<class T>using ordered_set=tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
template<class T>using ordered_multiset=tree<T, null_type,less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define findc(cn, abc) ((cn).find(abc) != (cn).end())
#define clr(cnt, x) memset((cnt), (x), sizeof(cnt))
typedef long long ll;
template <class T>using V=vector<T>;
#define all(x) (x).begin(), (x).end()
#define lb lower_bound
#define ub upper_bound
#define bg(cn) cn.begin()
template<typename T>
istream &operator>>(istream &in,vector<T>&a){for(T &i:a)in>>i;return in;}
template<typename T>ostream &operator<<(ostream &out, const vector<T> &a) {for (auto i : a) {out << i << " ";}return out;}
template<typename T>void remDup(vector<T> &v){sort(all(v)); v.erase(unique(all(v)),end(v));}
template<typename T,typename U>void safeErase(T &t, const U &u) {auto it = t.find(u);assert(it != end(t)); t.erase(it);}
template<class T>int lwb(const V<T>&a,const T&b){return int(lb(all(a), b)-bg(a));}// (v[r]>=x && v[l]<x) return r;
template<class T>int upb(const V<T>&a,const T&b){return int(ub(all(a),b)-bg(a));}//( v[r]>x && v[l]<=x) return r;
int64_t SUM(int64_t a, int64_t b) { return (b- a+1) * (a + b) / 2;}
ll cdiv(ll a, ll b) {return a / b + ((a ^ b) > 0 && a % b);} 
ll fdiv(ll a, ll b) {return a / b - ((a ^ b) < 0 && a % b);} 
const ll inf = (ll)1e18;
const ll _inf=(ll)-1e18;  
const int dx[4]{1, 0, -1, 0},dy[4]{0, 1, 0, -1};  
#define ff first
#define ss second 
#define pb push_back
constexpr int Pct(int x){return __builtin_popcount(x);}  
constexpr int Bits(int x){return x==0?0:31 -__builtin_clz(x);}  
constexpr int P2(int x) { return 1 << x; }
constexpr int Msk2(int x) { return P2(x) - 1;}
constexpr int Lastbit(int x) { return  x&~(x-1);}
typedef vector<pair<ll,ll>> vll;
typedef vector<pair<int,int>>vii;
typedef vector<ll>vl;  
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
#define sz(n) (int)(n).size() 
#define fora(cn) for(auto &x : (cn))
#define PI 2*acos(0) 
#define el '\n'
typedef unsigned long long ull;
typedef vector<int> vi;
#define se(X) setprecision(X)
#define PQ priority_queue
#define rall(x) (x).rbegin(), (x).rend()
#define FOR(n) for(int (i)=(0);(i)<(n);(i)++)
#define forr(z,x,n) for(int (z)=(x);(z)<(n);(z)++)
#define rfor(z,x,n) for(int (z)=(x);(z)>=(n);(z)--)
const int MX = (int)2e5 + 5;
void run_case(){

} 
int main(){
   ios::sync_with_stdio(false);cin.tie(0);
  int tt = 1;
     cin >> tt;
  for(int T=1;T<=tt;T++){
    run_case();
  }
  return 0;
}
