#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------DEFINE PLZ------------------------------------------------------------------------------------------------------//
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
#define   ss            second
#define   set_bits      __builtin_popcountll
#define   mod           1000000007
#define   mod1          998244353
#define   INF           1e18
//----------------------------------------------TEMPLATE FUNCTIONS--------------------------------------------------------------------------//
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
//-----------------------------------------FOR DEBUGING AND EASY PRINTING-----------------------------------------------------------//
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
 
int solve(){
    int n;cin>>n;
    int a[n],b[n],diff[n];
    int flag=0;
    clr(diff,0);
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; ++i)
    {
        diff[i]=a[i]-b[i];
        flag+=diff[i];
    }
    //cout<<flag<<endl;
    if(n==1){if(a[0]==b[0])cout<<0<<endl;else{cout<<-1<<endl;}return 0;}; 
    if(flag!=0){cout<<-1<<endl;return 0;}
    
    map<int ,int>mps;
    vector< pair <int,int> > vect;
    int move=0;
 
    for (int i = 0; i < n; ++i)
    {
        if(diff[i]<0){
            for (int j = 0; j < n; ++j)
            {
                if(diff[j]>0){
                    if(diff[i]+diff[j]>0){
                        diff[j]=diff[i]+diff[j];
                        mps[j+1]=i+1;
                        move+=abs(diff[i]);
                        int tt = abs(diff[i]);
                        diff[i]=0;
                        while(tt>0){
                            vect.pub({j+1,i+1});
                            tt--;
                        }
                        break;
                    }
                    else{diff[i]=diff[i]+diff[j];
                        move+=abs(diff[j]);
                        mps[j+1]=i+1;
                        int tt =abs(diff[j]);
                        diff[j]=0;
                        while(tt>0){
                            vect.pub({j+1,i+1});
                            tt--;
                        }
                    }
                }
            }
        }
        else if(diff[i]>0){
            for (int j = 0; j < n; ++j)
            {
                if(diff[j]<0){
                    if(diff[i]+diff[j]<0){diff[j]=diff[i]+diff[j];
                        mps[i+1]=j+1;
                        move+=abs(diff[i]);
                        int tt = abs(diff[i]);
                        diff[i]=0;
                        while(tt>0){
                            vect.pub({i+1,j+1});
                            tt--;
                        }
                        break;
                    }
                    else{diff[i]=diff[i]+diff[j];
                        move+=abs(diff[j]);
                        mps[i+1]=j+1;
                        int tt =abs(diff[j]);
                        diff[j]=0;
                        while(tt>0){
                            vect.pub({i+1,j+1});
                            tt--;
                        }
                    }
                }
            }
        }
    }
   // debug(mps);
   // print(diff);
    cout<<move<<endl;
    for(auto c:vect){cout<<c.first<<" "<<c.second<<endl;}
   // return 0;
}
 
int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    NeedForSpeed
    
    int t;cin>>t;
    while(t--){
        
        solve();
        //cout<<solve()<<endl;
    }
}