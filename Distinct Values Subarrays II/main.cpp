#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long n,k;cin>>n>>k;
    vector<long long> vec(n);
    for(long long i=0 ; i<n ;i++)cin>>vec[i];
    map<long long , long long> ma;
    long long i=0 , j=0;
    vector<long long > ano;
    ma[vec[0]]++;
    while((i<n)&&(j<n)){
        if(ma.size()>=k){
            while((j+1<n)&&(ma.count(vec[j+1])!=0))j++;
            ano.push_back((j-i+1));
            i=j+1;
            ma.clear();
        } 
        else {
            j++;
            if(j>=n)break;
            ma[vec[j]]++;
        }   
    }
    long long ans=0;
    for(auto val:ano)ans+=((1<<val)-1);
    cout<<ans<<endl;
    
    
}