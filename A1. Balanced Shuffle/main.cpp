#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    string n; cin>>n;
    vector<pair<long long , long long >> pre(n.size());
    for(int i=1 ; i<n.size() ; i++){
        if(n[i-1]==')') pre[i].first=pre[i-1].first-1;
        else pre[i].first=pre[i-1].first+1;
        pre[i].second=i+1;
    
    }
    for(int i=0 ; i<pre.size()-1 ; i++){
        for (int j=0 ; j<pre.size()-1; j++){
            if ((pre[j].first==pre[j+1].first)&&((pre[j].second<pre[j+1].second) )) swap(pre[j],pre[j-1]);
            if ((pre[j].first>pre[j+1].first)) swap(pre[j], pre[j+1]);
        }
    }
    for(auto val:pre) cout<<val.first<<"  "<<val.second<<endl;
    
    // for(auto val:pre) cout<<n[val.second];
    

}   
