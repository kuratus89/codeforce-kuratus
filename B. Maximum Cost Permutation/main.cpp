#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        vector<bool> in(n,0);
        for(long long i=0 ; i<n ; i++){
            if(vec[i]==0)continue;
            in[vec[i]-1]=1;
        }
        vector<long long> al;
        for(long long i=0 ; i<n ; i++)if(!in[i])al.push_back(i+1);

        long long cn=0 , ans=0;
        for(long long i=0 ; i<n; i++){
            if(vec[i]==0){
                if(al.size()==1){
                    if(al[0]!=(i+1))cn++;
                    else cn=0;
                }
                else cn++;
            }
            else {
                if(vec[i]==(i+1))cn=0;
                else cn++;
            }
            ans=max(cn , ans);            
        }
        cout<<ans<<endl;
    }
    

}   
