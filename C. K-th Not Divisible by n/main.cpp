#include <bits/stdc++.h>
using namespace std;
long long apple(long long a , long long b){
    return (a- (a/b));
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    
    while(tt--){
        long long n,k;cin>>n>>k;
        long long low=0 , high = 2*k , mid;
        bool ano=0;
        long long ans=0;
        while((low<high)&&(!ano)){
            mid = (low+high)/2;
            if((apple(mid , n)==k)&&(mid%n!=0)){
                ano=1;
                ans = mid;
            }
            else if(apple(mid , n)<k)low=mid;
            else high=mid;
        }
        
        cout<<ans<<endl;
    }
    
    
}