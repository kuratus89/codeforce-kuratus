#include <bits/stdc++.h>
using namespace std;

bool apple(vector<long long> vec , long long n){
    long long x= vec[vec.size()-1];
    long long y;
    if(n>x)return 0;
    if(n==x) y= vec.size()-1;
    else y = vec.size();
    if(y>=n)return 1;
    else return 0;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> vec(n);
        for(long long i=0 ; i<n ; i++)cin>>vec[i];
        map<long long, long long> ma;
        for(long long i=0 ; i<n; i++)ma[vec[i]]++;
        vector<long long> ano;
        for(auto val:ma)ano.push_back(val.second);
        sort(ano.begin() , ano.end());
        long long low=0 , high=1e5 , mid;
        while(low<high){
            mid = (low+high+1)/2;
            if(apple(ano, mid))low = mid;
            else high=mid-1;
        }
        cout<<low<<endl;
    }
    
    
}