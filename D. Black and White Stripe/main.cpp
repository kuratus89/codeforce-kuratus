#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    for(int j=0 ; j<n ; j++){
        long long  a;cin>>a;
        long long  b;cin>>b;
        string s;cin>>s;
        vector<long long> ans(a);
        for(int i=0 ; i<a ; i++) if(s[i]=='W') ans[i]=1;
        for(int i=1 ; i<a ; i++) ans[i]+=ans[i-1];
        long long ano=ans[b-1];
        for(int i=1 ; i<=(a-b) ; i++) ano=min(ano,(ans[i+b-1]-ans[i-1]));
        cout<<ano<<endl;
    }
    
}
