#include <bits/stdc++.h>
using namespace std;

bool apple(long long n, long long k){
    long long x = 4*(1 - pow(2,n));
    return (x<=k);
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    
    long long n;cin>>n;
    long long low=0 , high=1e12 , mid;
    while(low<high){
        mid = (low+high)/2;
        if(apple(mid , n))low = mid+1;
        else high=mid;
    }
    cout<<low<<endl;

    
}