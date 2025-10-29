#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    int t; cin>>t;
    set<pair<string,string>> sa;
    for (int j=0 ; j<t ; j++){
        string a; cin>>a;
        string b; cin>>b;
        sa.insert({a,b});
    }
    cout<<sa.size();
    
    

}   
