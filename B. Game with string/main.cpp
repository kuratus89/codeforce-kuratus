#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    string s;cin>>s;
    stack<char> st;
    long long ans=0;
    for(char val:s){
        if(st.empty())st.push(val);
        else {
            if(val==st.top()){
                ans++;
                st.pop();
            }
            else st.push(val);
        }
    }
    if(ans%2==0)cout<<"NO";
    else cout<<"YES";
    
    
}