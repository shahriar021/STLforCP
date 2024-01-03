#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"size of q is "<<q.size()<<" ";
    cout<<endl;

    // for(int i:q){
    //     cout<<i<<"->";
    // }

   for(int i=1;i<=q.size();i++){
    cout<<i<<"->";
   }

    cout<<q.front()<<endl;

    return 0;
}