#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    string s;cin>>s;
    vector<bool> vec(s.size());
    long long n= s.size();
    for(long long i=0 ; i<n ; i++){
        if(s[i]=='(')vec[i]=1;
        else vec[i]=0;
    }
    map<long long , long long> ma;
    stack<bool> st;
    long long ano=0;
    for(long long i=0 ; i<n ;i++){
        if(vec[i]){
            st.push(1);
        }
        else {
            if(st.empty())continue;
            
        }
    }
    
    
}