#include <bits/stdc++.h>
using namespace std;
int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long tt;cin>>tt;
    while(tt--){
        long long n; cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        map<long long , long long> ma;
        for(long long i=0 ; i<n;  i++)ma[vec[i]]++;
        pair<long long , long long> ans={0,0};
        for(auto it=next(ma.begin()) ; it!=ma.end() ; it++){
            long long pre = (*prev(it)).second;
            long long cur = (*it).second;
            ans.second += min(pre,cur);
            ans.first = max(ans.first , ans.second);
        }
        cout<<ans.first<<endl;
    }

}   
