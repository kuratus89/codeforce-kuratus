#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,a;cin>>n>>a;
        vector<long long >vec(n);
        long long l=0,r=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            if(vec[i]<a) l++;
            if(vec[i]>a) r++;
        }
        if(l>r)cout<<a-1;
        else cout<<a+1;
        cout<<endl;
    }
    
}