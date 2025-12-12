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
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        deque<long long> qe;
        for(long long i=0 ; i<n; i++)qe.push_back(vec[i]);
        long long a =0 , b=0 , as=0 , bs=0;
        long long ans=0;
        
        while(!qe.empty()){
            if(as<=bs){
                as+=qe.front();
                qe.pop_front();
                a++;
            }
            else {
                bs+=qe.back();
                qe.pop_back();
                b++;
            }
            if(as==bs)ans = max(ans , a+b);
        }
        cout<<ans<<endl;
    }
    
}