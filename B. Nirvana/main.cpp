#include <bits/stdc++.h>
using namespace std;

void apple(vector<long long> vec ,long long n , long long &ans , bool yay ){
    if(n>=vec.size()){
        long long tmep=1;
        for(long long val:vec)tmep*=val;
        ans = max(ans , tmep);
        return;
    }
    if(!yay){
        apple(vec , n+1 ,ans , yay);
        vec[n]--;
        if(vec[n]==0)vec[n]=1;
        apple(vec , n+1 , ans , 1);
    }
    else {
        vec[n]=9;
        apple(vec , n+1 , ans , yay);
    }
    
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n;cin>>n;
    vector<long long> vec;
    while(n){
        vec.push_back(n%10);
        n/=10;
    }
    reverse(vec.begin() , vec.end());
    long long ans=0;
    apple(vec , 0 , ans , 0);
    cout<<ans<<endl;
    
    
}