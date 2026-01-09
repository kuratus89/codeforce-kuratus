#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    map<long long , long long> ma;
    while(tt--){
        long long ty;cin>>ty;
        if(ty==1){
            long long n;cin>>n;
            ma[(1LL<<n)]++;
        }
        else{
            long long n;cin>>n;
            vector<long long> backup;
            map<long long , long long> mb=ma;
            while(n){
                auto it = mb.upper_bound(n);
                if(it == mb.begin())break;
                it--;
                long long num = (*it).first , cn = (*it).second;
                long long need = n/num;
                n-= min(need , cn)*num;
                mb[num]-=min(cn , need);
                if(mb[num]==0)mb.erase(num);
            }
            if(n==0)cout<<"YES";
            else cout<<"NO";
            cout<<endl;
        }
    }
    
    
}