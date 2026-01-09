#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        pair<long long , long long> st , a, b;cin>>st.first>>st.second>>a.first>>a.second>>b.first>>b.second;
        long long ans =0;
        long long ax = a.first - st.first;
        long long ay = a.second - st.second;
        long long bx = b.first - st.first;
        long long by = b.second - st.second;
        if((ax*bx)>0){
            ans += min(abs(ax), abs(bx));
        }
        if((by*ay)>0)ans += min(abs(ay), abs(by));
        cout<<ans+1<<endl;
    }
    
    
}