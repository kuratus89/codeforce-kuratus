#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec(n);
    for(long long i=0 ; i<n ;i++)cin>>vec[i];
    long long ans=LLONG_MAX;
    for(long long i=0 ; i<n ;i++){
        long long sum = 0;
        long long pre=0;
        for(long long j=i-1 ; j>=0 ; j--){
            long long temp = pre/vec[j];
            if((temp*vec[j])<=pre)temp++;
            sum+=temp;
            pre = temp*vec[j];
        }
        pre = 0;
        
        for(long long j=i+1 ; j<n ;j++){
            long long temp = pre/vec[j];
            if((temp*vec[j])<=pre)temp++;
            sum+=temp;
            pre = temp*vec[j];
        }
        ans = min(ans , sum);
    }
    cout<<ans<<endl;
    
}