#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n,k;cin>>n>>k;
        vector<long long> vec(n);
        for(long long i=0 ; i<n; i++)cin>>vec[i];
        deque<long long > de;
        for(long long val:vec)de.push_back(val);
        long long ans=0;
        bool turn=0;
        while((!de.empty())&&(k>0)){
            if(de.size()==1){
                if(de.front()<=k)ans++;
                break;
            }
            else if(turn){
                turn =0;
                de.back()--;
                k--;
                if(de.back()==0){
                    de.pop_back();
                    ans++;
                }            
            }
            else if(de.front()==de.back()){
                k-= (2*de.front())-1;
                if(k<0)break;
                de.back()=1;
                de.pop_front();
                ans++;
                turn=1;
            }
            else if(de.front()<de.back()){
                k-=(2*de.front())-1;
                if(k<0)break;
                de.back()-= de.front()-1;
                de.pop_front();
                ans++;
                turn=1;
            }
            else {
                k-=(2*de.back());
                if(k<0)break;
                de.front()-= de.back();
                de.pop_back();
                ans++;
            }

        }
        cout<<ans<<endl;
    }
    
    
}