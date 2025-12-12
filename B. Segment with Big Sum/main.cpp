#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    vector<long long> vec(n);
    for(long long i=0 ; i<n ; i++)cin>>vec[i];
    for(long long i=1 ; i<n ; i++)vec[i]+=vec[i-1];
    long long ans=LLONG_MAX , i=0 , j=0;
    while((j<n)&&(i<n)){
        long long sum;
        if(i==0)sum = vec[j];
        else sum = vec[j] - vec[i-1];
        if(sum>=k){
            ans = min(ans , j -i +1);
            i++;
            
        }
        else j++;
        if(i>j)j=i;
    }
    if(ans==LLONG_MAX)cout<<-1;
    else cout<<ans<<endl;

    
    
}