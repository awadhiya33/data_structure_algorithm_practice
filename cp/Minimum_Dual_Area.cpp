#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define int long long int
#define si(p)	scanf("%d",&p)
#define sl(p)	scanf("%lld",&p)
#define ss(s)	scanf("%s",s)
#define pi(p)	printf("%d\n",p)
#define pl(p)	printf("%lld\n",p)
#define ps(s)	printf("%s\n",s)
#define deb(p) cout << #p << "=" << p << endl
#define deb2(p, q) cout << #p << "=" << p << "," << #q << "=" << q << endl
#define pb push_back
#define mmp make_pair
#define F first
#define S second
#define all(p) p.begin(), p.end()
#define clr(p) memset(p, 0, sizeof(p))
#define sortall(p) sort(all(p))
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
int n;
        cin >> n;

        vector<pair<int, int>> p;
        vector<pair<int, int>> q;
        multiset<int> X;
        multiset<int> Y;

        for (int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;

            X.insert(a);
            Y.insert(b);
            p.push_back({a, b});
            q.push_back({b, a});
        }

        sort(q.begin(), q.end());
        sort(p.begin(), p.end());

        int h1min = LONG_MAX;
        int area = LONG_MAX;
        int height1 = 0;
        int height2 = 0;
        int h1max = 0;

        for (int i=0; i<(n-1); i++){
            h1max = max(h1max, p[i].second);
            h1min = min(h1min, p[i].second);
            height1 = h1max - h1min;
            auto it = Y.find(p[i].second);
            Y.erase(it);
            height2 = *Y.rbegin() - *Y.begin();
            int newArea = (p[i].first - p[0].first) * height1 + (p[n - 1].first - p[i + 1].first) * height2;
            area = min(area, newArea);
        }
        int width1 = 0;
        int width2 = 0;
        int w1Max = 0;
        int w1Min = LONG_MAX;

        for (int i=0;i <(n-1);i++){
            w1Max = max(w1Max, q[i].second);
            w1Min = min(w1Min, q[i].second);
            width1 = w1Max - w1Min;
            auto it = X.find(q[i].second);
            X.erase(it);
            width2 = *X.rbegin() - *X.begin();
            int newArea = (q[i].first - q[0].first) * width1 + (q[n - 1].first - q[i + 1].first) * width2;
            area = min(area, newArea);
        }
        if (area == LONG_MAX)
            area = 0;
        cout << area << endl;
  
}









int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}


