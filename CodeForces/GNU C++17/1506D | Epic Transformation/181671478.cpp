#include<bits/stdc++.h>
using namespace std;
#define   NeedForSpeed  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define   int           long long int
#define   fi            first
#define   se            second
#define   pub           push_back
#define   pi            pair<int,int>
#define   all(x)        (x).begin(), (x).end()
#define   rep(i, l, r)  for(int i=(int)(l);i<(int)(r);i++)
#define   repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define   clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define   print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define   clr(a,x)      memset(a,x,sizeof(a))
#define   rr(v)         for(auto &val:v)
#define   print(v)      for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define   len           length()
#define   sz            size()
#define   mod           1000000007
#define   elif          else if
#define   filein(x)     ifstream fin (x);
#define   fileout(x)    ofstream fout (x);
 
 
 ///@adib_1lm///
int32_t main(){
    NeedForSpeed
    //filein("") fileout("")
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];clr(arr,0);
       
        set<int>s;multiset<int>ms;
        
        int ans=0;
        for(int i=0;i<n;i++){
            int temp;cin>>temp;
            s.insert(temp);ms.insert(temp);
        }
        int sn=s.size();
        for(int i=0;i<sn;i++){
            arr[i]=ms.count(*s.begin());s.erase(*s.begin());
        }
        sort(arr,arr+sn);
        
        int lenval=arr[sn-1];
        
        int odd=0,evenval=0,oddval=0,even=0;
        
        for(int i=0;i<sn;i++){
            if(i!=sn-1){
            if(arr[i]%2==0){even++;evenval+=arr[i];}
            else{odd++;oddval+=arr[i];}
            }
        }
      //  cout<<oddval<<" "<<evenval<<" "<<lenval<<endl;
        if(lenval%2!=0){
            if(lenval>=oddval+evenval){cout<<lenval-oddval-evenval<<endl;}
            else if(odd%2!=0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else if(lenval%2==0){
            if(lenval>=oddval+evenval){cout<<lenval-oddval-evenval<<endl;}
            else if(odd%2==0){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
            
        }
       
     }
}