#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    vector<bool> prime(1e6+1 , 0);
    for(long long i=2 ; i<=1e6 ; i++){
        if(prime[i])continue;
        for(long long j=i*i ; j<=1e6 ; j+=i)prime[j]=1;
    }
    
    
    while(tt--){
        long long n;cin>>n;
        if(n==1){
            cout<<"NO"<<endl;
            continue;

        }
        long long low =1 , high = n , ans=-1;
        __int128_t mid ;
        
        while(low<=high){
            mid = (low+high)/2;
            if((__int128_t)mid*mid==n){
                ans = mid ;
                break;
            }
            else if(mid*mid<n)low= mid+1;
            else high = mid-1;
        }
        if((ans!=-1)&&(!prime[ans]))cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}