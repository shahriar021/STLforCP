#include<bits/stdc++.h>
using namespace std;

int main(){
    //max heap

    //////  will return maximum element...
    priority_queue<int>max;
    

    max.push(6);
    max.push(50);
    max.push(16);

    int maxSize=max.size();
    for(int i=0;i<maxSize;i++){
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;

    //min heap

    //will return minimum element....

    priority_queue<int,vector<int>,greater<>>min;
    min.push(6);
    min.push(50);
    min.push(16);
    int minSize=min.size();

    for(int i=0;i<minSize;i++){
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<endl;



}