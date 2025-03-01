#include<bits/stdc++.h>
using namespace std;

void lps(string a){
    int start=0;
    int end=1;
    int low;
    int high;
    for(int i=1;i<a.length();i++){
        low=i-1;
        high=i;
        while(low>=0&&high<a.length()&&a[low]==a[high]){
            if(high-low+1>end){
                start=low;
                end=high-low+1;
                
            }
            low--;
            high++;
        }

        low=i-1;
        high=i+1;
        while(low>=0&&high<a.length()&&a[low]==a[high]){
            if(high-low+1>end){
                start=low;
                end=high-low+1;
            
            }
            low--;
            high++;
        }
    }
    for(int i=start;i<start+end;i++){
        cout<<a[i];
    }

}

int main(){
    string a="abhishekkumarsingh";
    lps(a);
}