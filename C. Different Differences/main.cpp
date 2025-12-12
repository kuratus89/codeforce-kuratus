#include <bits/stdc++.h>
using namespace std;

bool apple(vector<long long> vec , long long n  , long long k){
    long long cn=n-1;
    long long ans=1;
    long long dif=1;
    while(n--){
        ans+=dif;
        dif++;
    }
    return ans<=k;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        vector<long long> vec;
        vec.push_back(1);
        long long dif=1;
        long long low =0 , high=1e12 , mid;
        while(low<high){
            if()
        }
        

    }
    
    
}