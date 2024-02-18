#include <iostream>  
#include<sstream> 
#include<bits/stdc++.h>
using namespace std;
 
//----------------------------------------------defs------------------------------------------------------------------------------------------------------//
#define   NeedForSpeed  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//#define   int           long long int
#define   uint          unsigned int
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
#define  vitr vector<int>::iterator
 
 
//for triversing//
#define fauto(x,v) for(auto& x:v)
 //sum shortcuts//
 int nSum (int _n){return (_n*(_n+1))/2;}
 
 //usaco input//
 void USACOsetIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}
 
//factorization func//
vector<int> trial_factor(uint64_t n) {
    vector<int> factorization;
    for (int d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}
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
 
 
 
void printAns(int ans){
    cout<<ans<<endl;
}
 
void initCode(){
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.out", "w", stdout);
        freopen("error.err", "w", stderr);
    #endif
    NeedForSpeed
 }
 
int solve()
{
 
    int n;
    cin>>n;
    string arr[n];
    int arr_val[n];
    int val_map[6][286];
    int val_needed_map[6][4][286];
    int val_needed_map_right[6][4][286];
    
    for(int i = 0; i<6; i++){
        for(int j = 0; j<286; j++){
            val_map[i][j] = 0;
        }
    }
    
    for(int i = 0; i<6; i++){
        for(int j = 0; j<4; j++){
            for(int k = 0; k < 286; k++){
                val_needed_map[i][j][k] = 0;
                val_needed_map_right[i][j][k] = 0;
            }
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
        //cout << arr[i] << endl;
        int val = 0;
        for (int j = 0; j < arr[i].length(); j++)
        {
            val += int(arr[i][j]);
        }
        arr_val[i] = val;
        //cout<<"val : "<<arr_val[i]<<endl;
        //cout<<"low_val : "<<int('0')<<" "<<int('9')<<endl;
        val_map[arr[i].length()][val]++;
        
        if(arr[i].length() == 3)
        {   
            int needed_val1 = 0 + (int(arr[i][0]) + int(arr[i][1]) - int(arr[i][2]))*(int(arr[i][0]) + int(arr[i][1]) - int(arr[i][2])>= 0);
            val_needed_map[3][1][needed_val1] ++;
            int needed_val2 = 0 + (int(arr[i][1]) + int(arr[i][2]) - int(arr[i][0]))*(int(arr[i][1]) + int(arr[i][2])  - int(arr[i][0]) >= 0);
            val_needed_map_right[3][1][needed_val2] ++; 
        }
        if(arr[i].length() == 4)
        {   
            int needed_val1 = 0 + (int(arr[i][0]) + int(arr[i][1]) + int(arr[i][2]) - int(arr[i][3]))*(int(arr[i][0]) + int(arr[i][1]) + int(arr[i][2]) - int(arr[i][3]) >= 0);
            val_needed_map[4][2][needed_val1] ++;
            int needed_val2 = 0 + (int(arr[i][1]) + int(arr[i][2]) + int(arr[i][3]) - int(arr[i][0]))*(int(arr[i][1]) + int(arr[i][2]) + int(arr[i][3]) - int(arr[i][0]) >= 0);
            //val_needed_map[4][2][needed_val2] ++;
            val_needed_map_right[4][2][needed_val2] ++;
        }
 
        if(arr[i].length() == 5)
        {   
            // for 3
            int needed_val1 = 0 + (int(arr[i][0]) + int(arr[i][1]) + int(arr[i][2]) + int(arr[i][3]) - int(arr[i][4]))*(int(arr[i][0]) + int(arr[i][1]) + int(arr[i][2]) + int(arr[i][3]) - int(arr[i][4]) >= 0);
            val_needed_map[5][3][needed_val1] ++;
            int needed_val2 = 0 + (int(arr[i][1]) + int(arr[i][2]) + int(arr[i][3]) + int(arr[i][4]) - int(arr[i][0]))*(int(arr[i][1]) + int(arr[i][2]) + int(arr[i][3]) + int(arr[i][4]) - int(arr[i][0]) >= 0);
            val_needed_map_right[5][3][needed_val2] ++;
 
            // for 1
            int needed_val3 = 0 + (int(arr[i][0]) + int(arr[i][1]) + int(arr[i][2]) - int(arr[i][3]) - int(arr[i][4]))*(int(arr[i][0]) + int(arr[i][1]) + int(arr[i][2]) - int(arr[i][3]) - int(arr[i][4]) >= 0);
            val_needed_map[5][1][needed_val3] ++;
            int needed_val4 = 0 + (int(arr[i][2]) + int(arr[i][3]) + int(arr[i][4]) - int(arr[i][0]) - int(arr[i][1]))*(int(arr[i][2]) + int(arr[i][3]) + int(arr[i][4]) - int(arr[i][0]) - int(arr[i][1]) >= 0);
            val_needed_map_right[5][1][needed_val4] ++;
        }
    }
    
    uint64_t res = 0;
 
    for (int i = 0; i < n; i++)
    {
        int currval = arr_val[i];
        int currlen = arr[i].length();
 
        res += val_map[currlen][currval];
        //cout<<res<<" "<<currval<<endl;
        
        if(currlen == 1){
            res += val_needed_map[3][1][currval];
            res += val_needed_map[5][1][currval];
            res += val_needed_map_right[3][1][currval];
            res += val_needed_map_right[5][1][currval];
        }
        if(currlen == 2){
            res+= val_needed_map[4][2][currval];
            res+= val_needed_map_right[4][2][currval];
        }
        if(currlen == 3){
            res+= val_needed_map[5][3][currval];
            res+= val_needed_map_right[5][3][currval];
        }
        
    }
    cout<<res<<endl;
 
    return 0;
 
}
 
int32_t main() {
    //for sublime and all//
    initCode();
    //for usaco//
    //USACOsetIO("");
 
    int t = 1;
    //cin>>t;
    while(t--){
        
        solve();
        //cout<<solve()<<endl;
    }
}