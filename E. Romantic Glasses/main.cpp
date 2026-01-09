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
        
        bool ans=0;
        vector<long long > vec(n) , veco;
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        veco = vec;
        for(long long i=0 ; i<n; i++){
            if(i%2==0)vec[i]=-vec[i];
            else veco[i] = -veco[i];
        }
        map<long long,long long> ma , mb;
        ma[vec[0]]++;
        mb[veco[0]]++;
        for(long long i=1 ; i<n ;i++){
            vec[i]+=vec[i-1];
            veco[i]+=veco[i-1];
            mb[veco[i]]++;
            ma[vec[i]]++;
            if(vec[i]==0||veco[i]==0)ans=1;
        }
        for(auto val:mb)if(val.second>=2)ans=1;
        for(auto val:ma)if(val.second>=2)ans=1;
        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
}