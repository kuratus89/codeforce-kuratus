#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long a;cin>>a;
    vector<long long>x(a);
    for(long long i=0 ; i<a;i ++)cin>>x[i];
    long long b;cin>>b;
    
    vector<long long>y(b);
    for(long long i=0 ; i<b; i++)cin>>y[i];

    map<long long ,long long  > ma;
    for(long long i=0 ; i<b ; i++)ma[y[i]]++;
    sort(x.begin() , x.end());
    long long ans=0;
    for(long long val:x){
        if(ma[val-1]!=0){
            ans++;
            ma[val-1]--;
        }
        else if(ma[val]!=0){
            ans++;
            ma[val]--;
        }
        else if(ma[val+1]!=0){
            ans++;
            ma[val+1]--;
        }
    }
    cout<<ans<<endl;

    
    
}