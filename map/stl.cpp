#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int,string>m;

    m[1]="shahriar";
    m[100]="alice";
    m[10]="bob";
    

    for(auto i:m){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    


}