#include <bits/stdc++.h>
using namespace std;

bool apple(vector<vector<long long>> &vec,long long par, vector<bool> &seen , long long i){
    if(seen[i])return 0;
    seen[i]=1;
    bool ans=1;
    for(long long val:vec[i]){
        if(val==par)continue;
        ans = ans&&apple(vec  ,i, seen , val);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<vector<long long>> vec(n+1);
    for(long long i=0 ; i<n; i++){
        long long a,b;cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    bool ans=0;
    vector<bool>seen(n+1,0);
    ans = apple(vec ,-1, seen ,1);
    if(ans)cout<<"YES";
    else cout<<"NO";    
}