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
        string s;cin>>s;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++){
            if(s[i]=='a')vec[i]=1;
            else vec[i]=-1;
        }
        for(long long i=1 ; i<n; i++)vec[i]+=vec[i-1];
        if(vec.back()==0){
            cout<<0<<endl;
            continue;
        }
        map<long long ,long long> ma;
        ma[0] = -1;
        long long ans=LLONG_MAX;
        for(long long i=0 ; i<n; i++){
            if(ma.count(vec[i]-vec.back())){
                ans = min(ans ,i- ma[vec[i]- vec.back()]);
            }
            ma[vec[i]] =i;
        }
        if(ans==n)ans=-1;
        cout<<ans<<endl;
    }
    
    
}