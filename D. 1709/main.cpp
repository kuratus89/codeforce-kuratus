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
        vector<long long> va(n) , vb(n);
        for(long long i=0 ; i<n ;i++)cin>>va[i];
        for(long long i=0 ; i<n ;i++)cin>>vb[i];
        vector<pair<long long , long long>> ans;
       
        for(long long i=0; i<n ;i++){
            for(long long j=1 ; j<n ;j++){
                if(va[j]<va[j-1]){
                    ans.push_back({1 , j});
                    swap(va[j-1] , va[j]);
                }
            }
        }
        for(long long i=0; i<n ;i++){
            for(long long j=1 ; j<n ;j++){
                if(vb[j]<vb[j-1]){
                    ans.push_back({2 , j});
                    swap(vb[j-1] , vb[j]);
                }
            }
        }
        for(long long i=0 ; i<n ;i++){
            if(va[i]>vb[i]){
                ans.push_back({3 , i+1});
                swap(va[i] , vb[i]);
            }
        }
        // for(long long i=0; i<n ;i++){
        //     for(long long j=1 ; j<n ;j++){
        //         if(va[j]<va[j-1]){
        //             ans.push_back({1 , j});
        //             swap(va[j-1] , va[j]);
        //         }
        //     }
        // }
        // for(long long i=0; i<n ;i++){
        //     for(long long j=1 ; j<n ;j++){
        //         if(vb[j]<vb[j-1]){
        //             ans.push_back({2 , j});
        //             swap(vb[j-1] , vb[j]);
        //         }
        //     }
        // }


        // for(long long val:va)cout<<val<<" ";
        // cout<<endl;
        // for(long long val:vb)cout<<val<<" ";
        // cout<<endl;
        cout<<ans.size()<<endl;
        for(auto val:ans)cout<<val.first<<" "<<val.second<<endl;
    }
    
    
}