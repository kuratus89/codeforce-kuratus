#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    map<long long , bool> ma;
    vector<long long> vec;
    long long x=1;
    while((x*x*x)<1e12){
        vec.push_back(x*x*x);
        ma[x*x*x]=1;
        x++;
    }
    while(tt--){
        long long n;cin>>n;
        bool ans=0;
        
        for(long long val:vec){
            if(val>n)break;
            if(ma[n-val]){
                ans=1;
                break;
            }
        }
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
        
    }
    
    
}