#include <iostream>
using namespace std;
#include<vector>

int main() {
	// your code goes here
	int t,n,ab;
	cin>>t;
	vector<vector<int> >v;
	int p1,p2;
	for(int j=0;j<t;j++){
	    	cin>>n;
	    vector<int>vec;
	for(int i=0;i<n;i++){
	    cin>>ab;
	    vec.push_back(ab);
	}
	v.push_back(vec);
	}
	for(int i=0;i<v.size();i++){
	    n=v[i].size();
	if(n==3){
	    p1=v[i][0];
	    p2=v[i][1]+v[i][2];
	}
	else if(n==2){
	    p1=v[i][0];
	    p2=v[i][1];
	}else if(n>3){
	    int x=v[i][0];
	    int y=v[i][1]+v[i][2];
	    for(int j=3;j<n;j++){
	        p1=p1+v[i][j];
	        p2=p2+v[i][j];
	    }
	    p1=p1+x;
	    p2=p2+y;
	}
	if(p1>p2){
	    cout<<"first\n";
	}
	else if(p1==p2){
	    cout<<"draw\n";
	}else
	cout<<"second\n";
	}
	return 0;
}