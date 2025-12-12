#include <bits/stdc++.h>
using namespace std;

void apple(vector<long long> &vec , long long n , long long k  , bool le){
    if((n>=vec.size())||(n<0))return;
    // if(vec[n]==0)return;
    if(vec[n]<=k)return;
    vec[n]=k;
    if(le)apple(vec , n-1 , k+1 , le);
    else apple(vec , n+1 , k+1 , le);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n);
    for(long long i=0 ; i<n; i++)cin>>vec[i];
    vector<long long> ans =vec;
    for(long long i=0 ; i<n; i++)if(ans[i]!=0)ans[i]=LLONG_MAX;
    for(long long i=0 ; i<n; i++){
        if(vec[i]!=0)continue;
        apple(ans , i-1, 1 , 1);
        apple(ans , i+1 , 1 , 0);
    }
    for(long long val:ans)cout<<val<<" ";
    cout<<endl;
    
    
}