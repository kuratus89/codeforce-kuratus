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
        long long x=vec[0] , y=0 ,cn=1;
        deque<long long> val;
        for(long long i=1 ; i<n;i++)val.push_back(vec[i]);
        while(!val.empty()){
            bool cn1=0;
            while((y<=x)&&(!val.empty())){
                y+=val.back();
                val.pop_back();
            }
            while((x<=y)&&(!val.empty())){
                x+=val.front();
                val.pop_front();
                cn1=1;
            }
            
            
        }
        cout<<cn<<" "<<x<<" "<<y<<endl;
    }
    
}