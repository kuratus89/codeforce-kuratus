#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<vector<long long>> vec(3);
    for(long long i=0 ; i<n ; i++){
        long long temp;cin>>temp;
        vec[0].push_back(temp);
    }
    for(long long i=0 ; i<n-1 ; i++){
        long long temp;cin>>temp;
        vec[1].push_back(temp);
    }
    for(long long i=0 ; i<n-2 ; i++){
        long long temp;cin>>temp;
        vec[2].push_back(temp);
    }
    map<long long ,long long > ma , mb , mc;
    for(auto val:vec[0])ma[val]++;
    for(auto val:vec[1])mb[val]++;
    for(auto val:vec[2])mc[val]++;
    vector<long long>ans;
    for(auto val:ma)if(mb[val.first]!=val.second)ans.push_back(val.first);
    for(auto val:mb)if(mc[val.first]!=val.second)ans.push_back(val.first);
    
    for(auto val:ans)cout<<val<<endl;
    
    
}