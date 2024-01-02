#include<bits/stdc++.h>
using namespace std;

int main(){
 vector<int>v;
 vector<int>vec(5,1);
 cout<<"capacity of v is "<<v.capacity()<<endl;   

 v.push_back(100);
 cout<<"capacity of v is "<<v.capacity()<<endl;   

 v.push_back(500);
 cout<<"capacity of v is "<<v.capacity()<<endl;   

 v.push_back(400);
 cout<<"capacity of v is "<<v.capacity()<<endl;   //capacity increses by 2
 cout<<v.size()<<endl;

    cout<<v.at(1)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout <<i<< " "<<endl;
    }
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout <<i<< " "<<endl;
    }

    //copy vector to a new vector

    vector<int>last(vec);

    for(int g:vec){
        cout<<g<<"->";
    }


 return 0;
}