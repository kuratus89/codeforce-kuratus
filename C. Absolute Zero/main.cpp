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
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        vector<long long> ans;
        bool anuo=0;
        while((ans.size()<=40)&&(!anuo)){
            bool ano=1;
            long long avg=0;
            for(long long i=0 ; i<n ;i++)avg+=vec[i];
            avg/=n;
            for(long long i=0 ; i< n;i++)vec[i] = abs(vec[i] - avg);
            for(long long i=0 ; i<n ;i++)if(vec[i]!=0)ano=0;
            ans.push_back(avg);
            if(ano)anuo=1;
        }
        if(anuo){
            cout<<ans.size()<<endl;
            for(long long val:ans)cout<<val<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
    }
    
}