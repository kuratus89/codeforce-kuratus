#include <bits/stdc++.h>
using namespace std;

int main(){
    long long  n; cin>>n;
    vector<long long> vec(n);
    for(int i=0 ; i<n ; i++)cin>>vec[i];
    int t;cin>>t;
    vector<long long> val=vec;
    sort(val.begin(), val.end());
    for(int i=1 ; i<n ; i++) vec[i]+=vec[i-1];
    for(int i=1 ; i<n ; i++) val[i]+=val[i-1];
    vector<long long> ans(t);
    for (int j=0 ; j<t ; j++ ){
        int a; cin>>a;
        int b; cin>>b;
        int c; cin>>c;
        if(a==1){
            if(b==1){
                ans[j]=vec[c-1];
            }else{
                ans[j]=(vec[c-1]-vec[b-2]);
            }
        }else{
            if(b==1){
                ans[j]=val[c-1];
            }else{
                ans[j]=(val[c-1]-val[b-2]);
            }
        }


        
    }
    for(auto he:ans)cout<<he<<endl;
    

}