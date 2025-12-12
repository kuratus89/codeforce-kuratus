#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k,d,w;cin>>n>>k>>d>>w;
        queue<long long> vec;
        for(long long i=0 ; i<n ; i++){
            long long temp;cin>>temp;
            vec.push(temp);
        }
        long long ans=0;
        while(!vec.empty()){
            long long to = vec.front();
            long long dose =0 , wait=0 , mov=0;
            
            while((!vec.empty())){
                dose++;
                if(to!=vec.front())wait++;
                if(to!=vec.front())mov++;
                vec.pop();
            }
            ans++;
        }
        cout<<ans<<endl;
    }
    
    
}