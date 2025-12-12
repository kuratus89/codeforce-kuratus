#include <bits/stdc++.h>
using namespace std;



int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,q;cin>>n>>q;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ;i++)cin>>vec[i];
        sort(vec.rbegin() , vec.rend());
        for(long long i=1 ; i<n; i++)vec[i]+=vec[i-1];
        while(q--){
            long long x;cin>>x;
            if(x>vec[n-1]){
                cout<<-1<<endl;
                continue;
            }
            long long low = 0 , high = n , mid;
            while(low<high){
                mid = (low+high)/2;
                if(vec[mid]>=x)high=mid;
                else low=mid+1;
            }
            cout<<low+1<<endl;
        }
    }
    
    
}