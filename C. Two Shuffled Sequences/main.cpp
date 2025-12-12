#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> ac , dc;
    map<long long , long long> ma;
    for(long long i=0 ; i<n;  i++){
        long long temp;cin>>temp;
        ma[temp]++;
    }
    bool ans=1;
    for(auto val:ma){
        if(val.second>2){
            ans=0;
            break;
        }
        if(val.second==2)ac.push_back(val.first);
        dc.push_back(val.first);
    }
    
    sort(ac.begin() , ac.end());
    sort(dc.rbegin() , dc.rend());
    if(ans){
        cout<<"YES"<<endl;
        cout<<ac.size()<<endl;
        for(long long val:ac)cout<<val<<" ";
        cout<<endl;
        cout<<dc.size()<<endl;
        for(long long val:dc)cout<<val<<" ";
        cout<<endl;

    }
    else cout<<"NO"<<endl;
    
}