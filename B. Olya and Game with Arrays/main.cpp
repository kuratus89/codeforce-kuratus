#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<vector<long long>> vec(n);
        for(long long i=0 ; i<n ; i++){
            long long c;cin>>c;
            for(long long j=0 ; j<c;  j++){
                long long temp;cin>>temp;
                vec[i].push_back(temp);
            }
        }
        vector<pair<long long , long long >> ano(n);
        for(long long i=0  ; i <n ; i++){
            vector<long long > temp = vec[i];
            sort(temp.begin() , temp.end());
            ano[i].first = temp[1];
            ano[i].second = temp[0];
        }
        vector<long long> left;
        long long ans=0;
        sort(ano.begin() , ano.end());
        for(long long i=1 ; i<ano.size() ; i++){
            ans+=ano[i].first;
            left.push_back(ano[i].second);
        }
        left.push_back(ano[0].first);
        left.push_back(ano[0].second);
        long long mi = LLONG_MAX;
        for(long long val:left)mi = min(mi , val);
        ans+=mi;
        cout<<ans<<endl;
    }
    

}   
