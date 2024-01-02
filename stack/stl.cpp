#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<string> st;

    st.push("shahriar");
    st.push("bob");
    st.push("that_was_last");

    st.pop();
    st.pop();
    

    // cout<<st.top()<<endl;
    cout<<"is empty or full ? "<<st.empty()<<endl;
    return 0;
}