#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int>s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(50);

    for(int i:s){
        cout<<i<<" ";
    }
}