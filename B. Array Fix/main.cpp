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
        
        if(vec[0]>0){
            long long temp1=vec[0];
            vector<long long> vol;
            while(temp1){
                vol.push_back(temp1%10);
                temp1/=10;
            }
            bool anoo=1;
            for(long long j=0 ;j<vol.size()-1; j++){
                if(vol[j]<vol[j+1])anoo=0;
            }
            if(anoo){
                vec[0] = vol[0];
                // cout<<vec[0]<<" ";
            }
        }
        bool ans=1;
        for(long long i=1 ; i<n; i++){
            if(vec[i]==0){
                if(vec[i-1]>0){
                    ans=0;
                    break;
                }
                continue;
            }
            long long temp=vec[i];
            vector<long long> val;
            while(temp){
                val.push_back(temp%10);
                temp/=10;
            }
            
            bool ano=1;
            for(long long j=0 ;j<val.size()-1; j++){
                if(val[j]<val[j+1])ano=0;
            }
            if(val.size()<=1)ano=0;
            if(ano){
                if((val[val.size()-1]>=vec[i-1])){
                    vec[i] = val[0];
                    // cout<<vec[i]<<" ";
                }
                else {
                    if(vec[i]<vec[i-1]){
                        ans=0;
                        break;
                    }
                }

            }
            else {
                if(vec[i]<vec[i-1]){
                    ans=0;
                    break;
                }
            }
            
        }

        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
    
}