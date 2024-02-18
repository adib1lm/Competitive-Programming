#include <iostream>  
#include<sstream> 
#include<bits/stdc++.h>
using namespace std;
 
//----------------------------------------------defs------------------------------------------------------------------------------------------------------//
#define   NeedForSpeed  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define   int           long long int
#define   pi            pair<int,int>
#define   all(x)        (x).begin(), (x).end()
#define   rep(i, l, r)  for(int i=(int)(l);i<(int)(r);i++)
#define   repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define   clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
#define   print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define   clr(a,x)      memset(a,x,sizeof(a))
#define   rr(v)         for(auto &val:v)
#define   print(v)      for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define   len           length()
#define   sz            size()
#define   elif          else if
#define   filein(x)     ifstream fin (x);
#define   fileout(x)    ofstream fout (x);
#define   nline         "\n"
#define   pub           push_back
#define   ppb           pop_back
#define   mp            make_pair
#define   ff            first
//#define   ss            second
#define   set_bits      __builtin_popcountll
#define   mod           1000000007
#define   mod1          998244353
#define   INF           1e18
//----------------------------------------------funcs--------------------------------------------------------------------------//
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
//-----------------------------------------debug----------------------------------------------------------//
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
//void _print(long long t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}
 
// Type Cnversions//
string toString(int _i){stringstream ss;ss<<_i;string _s;ss>>_s;return _s;}
string ftoString(float _f){ostringstream oss;oss<<_f;string _s;_s=oss.str();return _s;}
int s2i(string _s){stringstream ss(_s);int _i; ss>>_i;return _i;}
int n2i(char _c){ return (int)_c - '0';} // for number chars
int a2i(char _c){ return (int)_c;} // for alpha chars
string stringSplit(string _s, int _i, int _j){return _s.substr(_i, _j-_i);}//splitting string from i to j//
 
 
 //for printing//
#define yes "Yes"
#define no  "No"
#define YES "YES"
#define NO  "NO"
#define printreturn(x) {cout<<x<<nline; return 0;}
#define continue continue
 
//for triversing//
#define fauto(x,v) for(auto& x:v)
 //sum shortcuts//
 int nSum (int _n){return (_n*(_n+1))/2;}
 
 //templates//
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//@adib_1lm//---------------------------------------XXXXXXXXXXXXXX-------------------------------------------------//@adib_1lm//
//----------------------------------------------------@adib_1lm--------------------------------------------------------------//
 
void initCode(){
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
        freopen("error.err", "w", stderr);
    #endif
    NeedForSpeed
 }
int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    //check 1//
    int ans = -INF;
    bool found1 = false;
    int cons1 = 0;
    int mx1 = -INF;
    for (int i = 0; i < n; ++i)
    {
        if(!found1 and n2i(s[i])==1){
            cons1++;
            found1 = true;
            continue;
        }
        if(found1){
            if(n2i(s[i])==1){
                cons1++;
                if(i==n-1)
                    mx1 = max(cons1,mx1);
                continue;
            }
            if(n2i(s[i])==0){
                mx1 = max(mx1,cons1);
                //debug(mx1);
                found1 = false;
                cons1 = 0;
                continue;
            }
        }
        if(i==n-1){
            if(cons1>0){
                mx1 = max(cons1,mx1);
            }
        }
    }
    if(n==1 and s == "1")mx1 = 1;
    ans = max(mx1*mx1, ans);
 
    // check 0's//
    bool found0 = false;
    int cons0 = 0;
    int mx0 = -INF;
    for (int i = 0; i < n; ++i)
    {
        if(!found0 and n2i(s[i])==0){
            cons0++;
            found0 = true;
            continue;
        }
        if(found0){
            if(n2i(s[i])==0){
                cons0++;
                if(i==n-1)
                    mx0 = max(cons0,mx0);
                continue;
            }
            if(n2i(s[i])==1){
                mx0 = max(mx0,cons0);
               // debug(mx0);
                found0 = false;
                cons0 = 0;
                continue;
            }
        }
        if(i==n-1){
            if(cons0>0){
                mx0 = max(cons0,mx0);
            }
        }
    }
    debug(mx0);
    debug(mx1);
    if(n==1 and s == "0")mx0 = 1;
    ans = max(mx0*mx0, ans);
 
 
    //whole string//
    int c1 = 0;
    int c0 = 0;
    for (int i = 0; i < s.len; ++i)
    {
        c1+= (s[i]=='1'?1:0);
        c0+= (s[i]=='0'?1:0);
    }
    debug(c1*c0);
    ans = max(c1*c0, ans);
    printreturn(ans);
}
 
int32_t main() {
    initCode();
 
    int t;cin>>t;
    while(t--){
        
        solve();
        //cout<<solve()<<endl;
    }
}