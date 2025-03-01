#include<bits/stdc++.h>
using namespace std;
void fun(string s,string curr,int index){
  if(index==s.size()){
    cout<<curr<<" ";
    return;
  }
   fun(s,curr,index+1);
   fun(s,curr+s[index],index+1);
}
int main(){
  fun("abcd","",0);
  return 0;

}