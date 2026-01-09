#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        long long k;cin>>k;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        vector<long long> pos , neg;
        for(long long i=0 ; i<n; i++){
            if(vec[i]>0)pos.push_back(vec[i]);
            else neg.push_back(-vec[i]);
        }
        sort(pos.rbegin() , pos.rend());
        sort(neg.rbegin() , neg.rend());
        long long ex=0;
        long long ans=0;
        for(long long i=0 ; i<pos.size();){
            ans+=(pos[i])*2;
            ex = max(pos[i] , ex);
            i+=k;
        }
        for(long long i=0 ; i<neg.size();){
            ans+=(neg[i])*2;
            ex = max(neg[i] , ex);
            i+=k;
        }
        cout<<ans-ex<<endl;
    }
    
    
}