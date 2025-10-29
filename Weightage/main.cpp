#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //code-->>
    long long n,k;cin>>n>>k;
    vector<bool> ans(n,0);
    vector<long long> mark1(n) , mark2(n);
    long long mark1max=0 , mark2max=0;
    for(long long i=0 ; i<n; i++){
        cin>>mark1[i]>>mark2[i];
        mark1max = max(mark1max , mark1[i]);
        mark2max = max(mark2max , mark2[i]);
    }
    for(long long i=0 ; i<n;  i++){
        if(mark1[i]==mark1max)ans[i]=1;
        if(mark2[i]==mark2max)ans[i]=1;
    }
    for(long long i=0 ; i<n ; i++)if(ans[i])cout<<i+1<<" ";

    

}   
