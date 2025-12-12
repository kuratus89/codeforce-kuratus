#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    //cf id->kuratus
    //email -> kuratus89@gmail.com
    //your code stars here =>
    long long tt;cin>>tt;
    while(tt--){
        long long n;cin>>n;
        vector<long long> a(n),b(n);
        for(long long i=0 ; i<n ; i++)cin>>a[i];
        for(long long i=0 ; i<n ; i++)cin>>b[i];
        long long i=0 , j=n-1;
        while((i<n)&&(a[i]==b[i]))i++;
        while((j>0)&&(b[j]==a[j]))j--;
        while((i>0)&&(b[i-1]<=b[i]))i--;
        while((j<n-1)&&(b[j]<=b[j+1]))j++;
        cout<<i+1<<" "<<j+1<<endl;
    }
    
    
}