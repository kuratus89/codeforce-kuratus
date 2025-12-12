#include <bits/stdc++.h>
using namespace std;

void apple(vector<vector<long long >> &tree , vector<bool> &seen , long long n , long long pre){
    seen[n]=1;
    for(auto val:tree[n]){
        if(val==pre)continue;
        apple(tree , seen , val , n);
    }
    return ;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n);
    for(long long i=0 ; i<n ;i++)cin>>vec[i];
    vector<vector<long long >> tree(n);
    for(long long i=0 ; i<n ;i++){
        tree[i].push_back(vec[i]-1);
        tree[vec[i]-1].push_back(i);
    }
    long long ans=0;
    vector<bool> seen(n,0);
    for(long long i=0 ; i<n ;i++){
        if(seen[i])continue;
        ans++;
        apple(tree , seen , i , -1);
    }
    cout<<ans<<endl;
    
    
}