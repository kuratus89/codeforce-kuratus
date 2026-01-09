#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //  i love these types of problems
    //  i love u too for seeing my code bro
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> a(n), b(n);
        for(long long i=0 ; i<n; i++)cin>>a[i];
        for(long long i=0 ; i<n; i++)cin>>b[i];
        bool ans=1;
        if(b[0]<a[0])ans=0;
        for(long long i=1 ;i<n;i++){
            if(b[i]<a[i])ans=0;
            if((b[i]+1<b[i-1])&&(a[i-1]!=b[i-1]))ans=0;
        }
        if((b[0]+1<b[n-1])&&(a[n-1]!=b[n-1]))ans=0;

        if(ans)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    
}