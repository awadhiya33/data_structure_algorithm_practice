#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout << count(v.begin(),v.end(), "++X")+count(v.begin(),v.end(), "X++")-count(v.begin(),v.end(), "--X")-count(v.begin(),v.end(), "X--") << endl;
    return 0;
}