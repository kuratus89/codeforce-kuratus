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
        deque<long long> ans;
        
        if(n!=1)ans.push_back(1);
        ans.push_back(n);
        if(n!=1)ans.push_back(1);
        for(long long i=2 ; i<n ; i++){
            ans.push_back(i);
            ans.push_front(i);
        }
        ans.push_back(n);
        while(!ans.empty()){
            cout<<ans.front()<<" ";
            ans.pop_front();
        }
        cout<<endl;
        
    }

    
}