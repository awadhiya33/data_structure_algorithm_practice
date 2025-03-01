#include<bits/stdc++.h>
#include<stack>
using namespace std;



class Solution {
public:
    bool isValid(string s) {
        
        stack <int> stack;

        if(s[0]=='}' || s[0]==')' ||s[0]==s[0]==']'){
            
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='{'|| s[i]=='('|| s[i]=='['){
                stack.push(s[i]);
                
            }else{
                if(stack.empty()){
                    
                return false;    
                }
                if(stack.top()=='(' && s[i]==')' || stack.top()=='[' && s[i]==']' || stack.top()=='{' && s[i]=='}'){
                    
                    stack.pop();
                    
                }else{
                    
                    return false;
                }
                 
            }
        }
        if(stack.empty()){
            return true;
            
        }else
            return false;
         
    }
};
int main(){
    string s;
    cin>>s;
    Solution a;
   bool x= a.isValid(s);
   cout<<x;
}
