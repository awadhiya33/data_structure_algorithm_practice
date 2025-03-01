#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mmp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626


mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
int mpow(int base, int exp); 

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================
//START HERE





void solve() {
ll n,a;
	    cin>>n>>a;
	    int arr[n],arr2[a];
	    map<int,int>mmp;
	    int max=10e9;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    for(int i=0;i<a;i++){
	        cin>>arr2[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        if(i==0) mmp[i]=0;
	        else if(arr[i]!=0) mmp[i]=0;
	        else mmp[i]=max;
	    }
	    
	    int right=-1;
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]==1) right=i;
	        if(right!=-1){
	            if(arr[i]==0) mmp[i]=min(mmp[i],i-right);
	        }
	    }
	    
	    int left=-1;
	    
	    for(int i=n-1;i>=0;i--){
	        if(arr[i]==2)left=i;
	        if(left!=-1){
	            if(arr[i]==0) mmp[i]=min(mmp[i],left-i);
	        }
	    }
	    
	    for(int i=0;i<a;i++){
	        int data=arr2[i];
	        if(mmp[data-1]!=max) cout<<mmp[data-1]<<" ";
	        else cout<<-1<<" ";
	    }
	    cout<<endl;
  
}









int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}





int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

