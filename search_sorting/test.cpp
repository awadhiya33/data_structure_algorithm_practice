#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;

#define ll               long long
#define int              long long
#define ull              unsigned long long
#define ff               first
#define ss               second
#define pb               push_back
#define mp               make_pair
#define pii              pair<int,int>
#define vi               vector<int>
#define vll              vector<ll> 
#define vvi              vector< vector<int>>
#define vvll             vector< vector<ll>>
#define vpii             vector<pair<int,int>>
#define mii              map<int,int>
#define pqb              priority_queue<int>
#define pqs              priority_queue<int, vector<int>, greater<int>>
#define setbits(x)       __builtin_popcountll(x)
#define zrobits(x)       __builtin_ctzll(x)
#define mod              1000000007
#define inf              1e18
#define ps(x,y)          fixed<<setprecision(y)<<x
#define mk(arr, n, type) type *arr=new type[n];
#define wt(x)            int x; cin>>x; while( x-- )
#define rep(i,a,b)       for( int i=a; i<=b; i++ )
#define repi(i,a,b)      for( int i=a; i>=b; i-- )
#define sp               ' '
#define nl               char(10)
#define endl             char(10)
#define PRT(ar)          for( auto i : ar ) cout<<i<<sp; cout<<nl;
#define mems(x,ch)       memset(x,ch,sizeof(x))
#define sortv(x)         sort(x.begin(),x.end())
#define sortvr(x)        sort(x.rbegin(),x.rend())
#define all(x)           x.begin(), x.end()

const ll N = 1e3 + 5;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
// typedef tree< int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void fastIO() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
}
class Solution{
  public :
  int solve(int n, vi &nums){
    int ts=0;
    for( auto x: nums) ts += x;
    int ans = n;
    for(int i=1; i<=n; i++){
        int ss = ts/i;
        int mx = 0;
        int cnt=0;
        int j=0;
        int prev = 0;
        int fnd=0;
        for( j=0; j<n; j++){
            prev += nums[j];
            cnt++;
            if(prev == ss){
                mx = max(mx, cnt);
                cnt=0;
                prev=0;
                fnd=1;
            }
            else if(prev > ss ) break;
        }
        if(prev < ss && prev!=0 ) continue;
        if(prev > ss && prev!=0 ) continue;
        if(fnd==1) ans = min(ans, mx);
    }
    return ans;
  }  
};


int32_t main() {
    fastIO();
    Solution sol;

    wt(t) {
        int n; cin>>n;
        vi nums(n);
        for( auto &x: nums) cin>>x;
        cout<<sol.solve(n, nums)<<nl;
       
    }



    return 0;
}
