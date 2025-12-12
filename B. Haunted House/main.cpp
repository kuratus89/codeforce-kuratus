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
        
        vector<long long> vec;
        long long ans=0;
        long long tail = 0;
        long long j=n-1;
        for(long long i=n-1 ; i>=0; i--){
            
            // if(i==n-1)for(; (j>=0)&&(s[j]=='1'); j-- )tail++;
            // else for( ; (j>=0)&&(s[j+1]=='1') ; j--)tail++;
            for(; (j>=0)&&(s[j]=='1'); j-- )tail++;
            
            if(j<0) {
                vec.push_back(-1);
                continue;
            }
               
            
            ans+=tail;
            vec.push_back(ans);
            s[j]='1';
            j--;
            
        }
        for(auto val:vec)cout<<val<<" ";
        cout<<endl;

    }
    
}