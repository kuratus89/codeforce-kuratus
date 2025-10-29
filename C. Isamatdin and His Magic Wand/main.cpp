#include <bits/stdc++.h>
using namespace std;
bool com(long long a , long long b){
    if((a%2)==(b%2))return 0;
    return (b>a);
}
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        // sort(vec.begin() , vec.end() ,com );
        bool ev=0,od=0;
        for (auto val:vec) {
            if (val%2==0)ev=1;
            else od=1;
        }

        if (ev&&od)sort(vec.begin(), vec.end());
        for(long long val:vec)cout<<val<<" ";
        cout<<endl;
    }
    
}