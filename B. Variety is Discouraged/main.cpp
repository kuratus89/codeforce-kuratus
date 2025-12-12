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
        if(n==1){
            cout<<1<<" "<<1<<endl;
            continue;
        }
        map<long long , long long> ma;
        for(long long i=0 ; i<n ;i++)ma[vec[i]]++;
        long long te=0;
        pair<long long , pair<long long , long long>> ans={0,{0,0}};
        for(long long i=0 ; i<n; i++){
            if(ma[vec[i]]==1){
                te++;
            }
            else {
                
                te=0;
            }
            ans = max(ans,{te , {i-te+2 , i+1}});
        }
        if(ans.first==n){
            cout<<1<<" "<<n<<endl;
            continue;
        }
        if(ans.first==0){
            cout<<0<<endl;
            continue;
        }
        cout<<ans.second.first<<" "<<ans.second.second<<endl;

        
        
    }
    
    
}