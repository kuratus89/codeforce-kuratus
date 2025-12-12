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
        vector<long long> vec(n) , ano(n);
        for(long long i=0 ; i<n;i++)cin>>vec[i];
        long long x=LLONG_MAX;
        long long mi=0;
        map<long long , bool> ma;
        for(long long i=0; i<n; i++)ma[vec[i]]=1;
        while(ma[mi])mi++;
        ano = vec;
        x = ano[0];
        ano[0] = mi;
        ma[mi]=1;
        ma[x]=0;
        for(long long i=1 ; i<n; i++){
            while(ma[mi])mi++;
            ma[ano[i]]=0;
            long long temp = x;
            x = ano[i];
            ano[i] =min(mi , temp);
            ma[min(mi , temp)]=1;
        }
        while(ma[mi])mi++;
        // for(long long val:ano)cout<<val<<" ";
        // cout<<"-> "<<min(x , mi)<<endl;
        k=(k-1)%(n+1);
        vector<long long> ans;
        long long cn=0;
        for(long long i=(n+1-k) ;( i<=n); i++ ){
            if(i==n)ans.push_back(min(x,mi));
            else ans.push_back(ano[i]);
        }
        for(long long i=0 ;(i<(n-k)); i++ ){
            if(i==n)ans.push_back(min(x,mi));
            else ans.push_back(ano[i]);
        }
        for(long long val:ans)cout<<val<<" ";
        cout<<endl;

    }
    
    
}