#include<bits/stdc++.h>
using namespace std;
void display(list<int> lst){
    auto it=lst.begin();
    for(;it!=lst.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> list1;     //List of length 0
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(1);
    list1.push_back(7);
    list1.push_back(9);
    display(list1);
    // Removing elements from the list
    //list1.pop_front();
    //list1.pop_back();
    //list1.remove(1);

    list<int> list2(7);  //Empty list of size 7
    auto itr=list2.begin();
    int x=2;
    for(;itr!=list2.end();itr++){
        *itr=x++;
    }
    display(list2);
//SORTING
    list1.sort();
    display(list1);
    list2.sort();
    list1.merge(list2);
    cout<<"After merging two sorted list : ";
    display(list1);

    return 0;
}