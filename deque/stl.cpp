#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int>d;

    d.push_back(90);
    d.push_front(80);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_front();

    for(int i:d){
        cout<<i<<" ";
    }

    cout<<d.empty()<<endl;
    return 0;
}