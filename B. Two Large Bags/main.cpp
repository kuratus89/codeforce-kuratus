#include <bits/stdc++.h>
using namespace std;

void apple(map<long long  , long long> &ma , long long n){

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
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        map<long long , long long> ma;
        for(long long i=0 ; i<n ;i++)ma[vec[i]]++;
        long long ans=1;
        for(auto val:ma){
            if((val.second==0)||(val.second==2))continue;
            if(val.second==1){
                ans=0;
                break;
            }
            
            ma[val.first+1]+=(val.second -2);
        }
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}